#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @num: is the number of times the \ character
 *      should be printed
*/

void print_diagonal(int num)
{
	int postn, space;

	if (num <= 0)
		_putchar('\n');
	else
	{
		for (postn = 0; postn <= num; postn++)
		{
			for (space = 0; space <= postn; space++)
			{
				_putchar(32);
			}

			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}

