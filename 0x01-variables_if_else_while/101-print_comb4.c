#include <stdio.h>

/**
 * main - main function 
 * Return: always 0
 *
 */

int main(void)
{
	int i;
	int j;
	int w;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			for (w = 2 ; w < 10 ; w++)
			{
				if (i < j && j < w)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(w + '0');
					if (i + j + w !=24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

