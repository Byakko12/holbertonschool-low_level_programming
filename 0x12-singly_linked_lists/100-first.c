#include <stdio.h>

void premain(void) __attribute__((constructor));

/**
 * premain - print line before main
 * Return: nothing
 **/
void premain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}