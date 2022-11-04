#include "main.h"

/**
 * convert _day - converts day of month to dayo of the year, without accouniting the leap yeaer
 * @month: month in number format
 * @day: day of mmonth
 * Return: day of year
 */

int convert_day(int month, int day)
{
	switch(month)
	case 2:
		day = 31 +day;
			break
