#include "main.h"


int _printf(const char *format, ...)
{
	/*char ch;*/
	va_list parameters;
	unsigned int len = 0;
	int i;

	va_start(parameters, format);
	if (format == NULL)
	{
		va_end(parameters);
		return (-1);
	}
	else
	{
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				i++;
				switch(format[i])
				{
					case 'c':
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
		va_end(parameters);
		return (len);
	}
	/*va_end(parameters);
	return (len);*/
}
