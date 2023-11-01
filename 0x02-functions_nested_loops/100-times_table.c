include "main.h"

/**
 * prinr_times_table - prints the n times time table
 * @n: number of the times table
 */

void print_times_table(int n)
{
	int s, u, v;

	if(n >= 0 && n <= 15)
	{
		for (s = 0; s <= n; s++)
		{
			for (u 0; u <= n; u++)
			{
				v = u * s;
				if (u == 0)
				{
					_putchar(v + '0');
				}
				else if (v < 10 && u != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(v + '0');
				}
				else if (v >= 10 && v < 100)
				{
					_putchar(',')
					_putchar(' ')
					_putchar(' ')
					_putchar((v / 100) + '0');
					_putchar((v % 10) + '0');
				}
				else if (v >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((v / 100) + '0');
					_putchar(((v / 10) % 10) + '0')
					_putchar((v % 10) + '0';
				}
			}
			_putchar('\n')
		}
	}
}			
