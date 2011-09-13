/*
 * Simple program to add two numbers (given in as arguments). Used to
 * test argument passing to child processes.
 *
 * Intended for the basic system calls assignment; this should work
 * once execv() argument handling is implemented.
 */

#include <unistd.h>

int
main()
{
	int pid = 0;
	pid = getpid();
	return 0;
}
