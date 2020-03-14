#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * p_char - Prints Char.
 * @lista: Char to be printed
 * Return: 0.
 */
void p_char(va_list lista)
{
	printf("%c", va_arg(lista, int));
}
/**
 * p_int - Prints integer.
 * @lista: Integer to be printed
 * Return: 0.
 */
void p_int(va_list lista)
{
	printf("%i", va_arg(lista, int));
}
/**
 * p_float - Prints float.
 * @lista: Float to be printed
 * Return: 0.
 */
void p_float(va_list lista)
{
	printf("%f", va_arg(lista, double));
}
/**
 * p_str - Prints strings.
 * @lista: String to be printed
 * Return: 0.
 */
void p_str(va_list lista)
{
	char *str;

	str = va_arg(lista, char*);
	if (!str)
		printf("(nil)");
	printf("%s", str);
}
/**
 * print_all - Prints all.
 * @format: Format.
 * Return: none.
 */
void print_all(const char * const format, ...)
{
	p_all types[] = {
		{'c', p_char},
		{'i', p_int},
		{'f', p_float},
		{'s', p_str}
	};
	int i, j;
	va_list all;
	void (*ptr)();
	char *coma = "";

	va_start(all, format);
	i = 0;
	while (format[i] && format)
	{
		j = 0;
		while (types[j].type)
		{
			if (types[j].type == format[i])
			{
				printf("%s", coma);
				ptr = types[j].f;
				ptr(all);
				coma = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(all);
}
