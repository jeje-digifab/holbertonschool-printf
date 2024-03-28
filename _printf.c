#include "main.h"

/**
 * _printf - function to formatted printing to stdout
 * It's a very "mini" printf function, with only few
 * specifiers (%c %s %% %d %i) in our project.
 * It's a variadic function
 * @format: The string character to iterate
 * Return: count variable.
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	int (*pf)(va_list args);
	va_list args;

	if (format == NULL)
	{
		write(1, "\n", 1);
		exit(0);
	}
	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			count = count + _putchar(format[i]);
		}
		else
		{
			pf = get_spec_func(format[i + 1]);
			if (pf != NULL)
			{
				count = count + pf(args);
				i++;
			}
		}
		i++;
	}
	va_end(args);
	return (count);
}
