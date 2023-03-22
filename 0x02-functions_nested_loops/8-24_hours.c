/*
 *file: 8-24_hours.c
 */
#include "main.h"
/**
 * jack_bauer - print every minute of the day in military time
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour;
	int minutes;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
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
