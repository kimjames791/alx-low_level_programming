#include "main.h"
/**
 * time_table - a function that prints time table 9
 * time tabe
 *
 * description: it prints timetable followed by , and 2 spaces
 *
 */

void times_table(void)

{
	int p, q, r;

	for (p = 0; p <= 9; p++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(',');

		for (q = 0; q <= 9; q++)
		{
			r = (p * q);

			if ((r / 10) > 0)
			{
				_putchar((r / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
				_putchar((r % 10) + '0');
			if (q < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
