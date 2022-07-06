#include "main.h"


int _printf(const char *format, ...)
{
	char ch;
	va_list parameters;
	unsigned int len = 0;
	int i;

	va_start(parameters, format);
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				i++;
				switch(format[i])
				{
					case 'c':
						ch = va_arg(parameters, int);
						print_char(ch);
						len++;
						break;
					case 's':
						len += print_string(va_arg(parameters, char *));
						break;
					case '\0':
						return (-1);
					default:
						len += just_in_case(format[i]);
						break;
				}
			}
			else
			{
				print_char(format[i]);
				len++;
				i++;
			}
		}
	}
	else
	{
		return (-1);
	}
	va_end(parameters);
	return (len);
}
