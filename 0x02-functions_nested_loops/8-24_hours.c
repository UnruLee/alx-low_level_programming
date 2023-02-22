#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: prints every minute of the day of jack bauer
 *
 * Return: void
 */

void jack_bauer(void)
{
	int tenth_hour, unit_hour, tenth_minute, unit_minute, max_hour;

	max_hour = 58;
	tenth_hour = '0';
	while (tenth_hour < '3')
	{
		if (tenth_hour == '2')
		{
			max_hour = '4';
		}
		unit_hour = '0';
		while (unit_hour < max_hour)
		{
			tenth_minute = '0';
			while (tenth_minute < '6')
			{
				unit_minute = '0';
				while (unit_minute < 58)
				{
					_putchar(tenth_hour);
					_putchar(unit_hour);
					_putchar(':');
					_putchar(tenth_minute);
					_putchar(unit_minute);
					_putchar('\n');
					unit_minute++;
				}
				unit_minute = '0';
				tenth_minute++;
			}
			tenth_minute = '0';
			unit_hour++;
		}
		unit_hour = '0';
		tenth_hour++;
	}
}
