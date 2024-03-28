#include "main.h"

/**
 * spec_string - function to return a string
 * character by charracter
 * @args: argument value from the va_list (variadic)
 * Return: the string passed by args value
 */
int spec_string(va_list args)
{
	int i = 0;
	char *string = va_arg(args, char *);

	for (i = 0 ; string[i] != '\0' ; i++)
		_putchar(string[i]);
	return (i);
}
