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
	char ch, per = '%';

	va_start(parameters, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case '%':
				switch (format[i + 1])
				{
					case 'c':
						ch = va_arg(parameters, int);
						write(1, &ch, 1);
						i += 2;
						j++;
						break;
					case 's':
						/*p = va_arg(parameters, char *);*/
						print_string(va_arg(parameters, char *));
						j += strlen(va_arg(parameters, char *));
						i += 2;
						break;
					case '%':
						write(1, &per, 1);
						j++;
						i += 2;
						break;
					case '\0':
						write(1, "", 1);
						i += 2;
						break;
					default:
						break;
				}
				break;
			default:
				j++;
				i++;
				break;
		}
	}
	va_end(parameters);
	return (j);
}
