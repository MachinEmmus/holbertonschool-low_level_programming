#include <stdio.h>
void MachinEmmusFunc(void)__attribute__ ((constructor));

/**
 * MachinEmmusFunc - Function so Machine that start before that main
 */
void MachinEmmusFunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
