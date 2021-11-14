#include<stdio.h>
/**
 * print_sentences - print
 */
void print_sentences(void) __attribute__ ((constructor));

void print_sentences(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
