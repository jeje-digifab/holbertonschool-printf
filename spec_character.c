#include "main.h"

/**
 * spec_character - function to return a character
 * @args: argument value from the va_list (variadic)
 * Return: the character passed by args value
 */
int spec_character(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

