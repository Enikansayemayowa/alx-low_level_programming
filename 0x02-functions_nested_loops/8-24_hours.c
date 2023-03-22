/*
 *file: 8-24_hours.c
 */
#include "main.h"
/**
 * jack_bauer - print every minute of the day in military time
 *
 * Return: void
 */
void times_table(void)
{
	int hour;
	int minutes;

	for (hour = 0; hour <= 24; hour++)
	{
		for (minutes = 0; minutes <= 60; minutes++)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + minutes / 10);
			_putchar('0' + minutes % 10);
			_putchar('\n');
		}
	}
}
