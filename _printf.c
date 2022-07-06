#include "main.h"
/**
* _printf - copy of the original printf() function
* @format: if 'c, s, i or f' passed, acts like a printf() functions
* otherwise, ignores the character and prints the args passed
*Return: amount of args passed
*/
int _printf(const char *format, ...)
{
	va_list parameters;
	int i = 0, j = 0;
	char ch;

	va_start(parameters, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					ch = va_arg(parameters, int);
					write(1, &ch, 1);
					i++;
					j++;
					break;
				case 's':
					/*p = va_arg(parameters, char *);*/
					print_string(va_arg(parameters, char *));
					j += strlen(va_arg(parameters, char *));
					i++;
					break;
				default:
				j += just_in_case(format[i], format[i + 1]);
				i++;
				break;
			}
		}
		else
		{
			j += empty_case(format[i + 1], format[i]);
		}
		i++;
	}
	va_end(parameters);
	return (j);
}
