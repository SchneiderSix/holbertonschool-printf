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
	int i = 0/*, j*/;
	char *p, ch;

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
					break;
				case 's':
					p = va_arg(parameters, char *);
					print_string(p);
					break;
				default:
				just_in_case(format[i], format[i + 1]);
				i++;
				break;
			}
		}
		else
		{
			if (format[i + 1] == '\0' && format[i] == '%')
			{
				write(1, "", 1);
			}
			write(1, &format[i], 1);
		}
		i++;
	}
	va_end(parameters);
	return (i);
}
