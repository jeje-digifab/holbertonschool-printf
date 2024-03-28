#include "main.h"

/**
 * spec_percent - function to return the % special character
 * @args: argument value from the va_list (variadic)
 * Return: the % character - ignore args value
 */
int spec_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
