#include "main.h"

/**
 * spec_decimal - function to return int (from %d or %i)
 * @args: argument value from the va_list (variadic)
 * Return: len of number passed by args value
 */
int spec_decimal(va_list args)
{
	long int num = va_arg(args, int);
	int num2;
	int base = 1;
	int i = 0;

	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
		i++;
	}
	num2 = num;
	while ((num2 / 10) != 0)
	{
	base = base * 10;
	num2 = num2 / 10;
	}
	while (base != 0)
	{
		_putchar((num / base) + '0');
		num %= base;
		base = base / 10;
		i++;
	}
	return (i);
}

