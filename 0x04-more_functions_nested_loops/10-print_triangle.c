#include"main.h"

/**
 * print_triangle - prints triangle using _putchar,
 *
 * @size: size of triangle
 *
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0 ; x < size ; x++)
		{
			for (y = 0 ; y < size ; y++)
			{
				if (y < size - (b + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

