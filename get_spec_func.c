#include "main.h"
/**
 * get_spec_func - function pointer that return an int
 * This function compare a char to a typedef struct,
 * to return to the good output function
 * function to perform the operation asked by the user
 * @c: input char received from _printf function
 * Return: 0 with no errors.
 */
int (*get_spec_func(char c))(va_list args)
{
	spec_t my_spec[] = {
		{'c', spec_character},
		{'s', spec_string},
		{'%', spec_percent},
		{'d', spec_decimal},
		{'i', spec_decimal},
		{'\0', NULL}
	};
	int i = 0;

	while (my_spec[i].spec != '\0')
	{
		if (my_spec[i].spec == c)
			return (my_spec[i].pf);
		i++;
	}
	return (0);
}










