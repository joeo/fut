#ifndef BRANCH_H
#define BRANCH_H

/* Functions for acting on the information about branches. */

/*
 * Creates a new branch, where head is the branch currently checked
 * out, name is the new branch name, start_name is the name of the
 * existing branch that the new branch should start from, force
 * enables overwriting an existing (non-head) branch, reflog creates a
 * reflog for the branch, and track causes the new branch to be
 * configured to merge the remote branch that start_name is a tracking
 * branch for (if any).
 */
void create_branch(const char *head, const char *name, const char *start_name,
		   int force, int reflog, int track);

/*
 * Remove information about the state of working on the current
 * branch. (E.g., MERGE_HEAD)
 */
void remove_branch_state(void);

#endif