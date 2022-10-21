#include "main.h"
/**
 * print_numbers - prints from 0 to 9.
 * minus 2 and 4
 *
 * Return: Always 0.
*/

void print_numbers(void)
{
	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			_putchar(i + '0');
	}
	putchar("\n");
}
