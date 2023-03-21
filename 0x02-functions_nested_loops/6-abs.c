/*
 * file: 6-abs.c
 */
#include "main.h"
/**
  * _abs - returns absolute value of n
  * @i: integer value to be tested
  * Return: absolute value of i
  *
  */
int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}
