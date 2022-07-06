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
				switch(format[i + 1])
				{
					case 'c':
						ch = va_arg(parameters, int);
						print_char(ch);
						len++;
						i += 2;
						break;
					case 's':
						len += print_string(va_arg(parameters, char *));
						i += 2;
						break;
					case '\0':
						return (-1);
					default:
						just_in_case(format[i]);
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
