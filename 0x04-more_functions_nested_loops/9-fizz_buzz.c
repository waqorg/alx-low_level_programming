#include"stdio.h"

/**
 * main - Description: fizz_buzz - prints the numbers from 1 to 100,
 *   followed by a new line. But for multiples of three print Fizz
 *   for the multiples of five print Buzz
 *   multiples of both three and five print FizzBuzz
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3) == 0)
		{
			printf("Fizz");

		}
		else if ((x % 5) == 0)
		{
			printf("Buzz");

		}
		else if (((x % 5) == 0) && ((x % 3) == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", x);
		}
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}

	/*printf(\"\n\");*/
	return (0);
}
