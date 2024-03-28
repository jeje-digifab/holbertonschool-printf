#include "main.h"

/**
 * spec_decimal - function to return int (from %d or %i)
 * @args: argument value from the va_list (variadic)
 * Return: the character passed by args value
 */
int spec_decimal(va_list args)
{
	int num = va_arg(args, int);
	int num2;
	int base = 1;

	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
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
	}
	return (0);
}

