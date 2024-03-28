#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * struct spec - struture to obtain the output specificator
 * @spec: name of the structure (spec for specificator)
 * @pf: pointer to a function to select the correct
 * function in output
 */
typedef struct spec
{
	char spec;
	int (*pf)(va_list args);
} spec_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_spec_func(char c))(va_list args);
int spec_character(va_list args);
int spec_string(va_list args);
int spec_percent(va_list args);
int spec_decimal(va_list args);

#endif
