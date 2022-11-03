#include "main.h"
/**
 * void _print_rev_recursion(char *s):a function that 
 *       prints a string in reverse
 *
 * @*s: string pointer 
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
