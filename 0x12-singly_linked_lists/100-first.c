#include <stdio.h>
/**
 * myStartupFun - func
 * Return: void
 */
void myStartupFun(void) __attribute__ ((constructor));
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
