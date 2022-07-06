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
					case '%':
						print_char('%');
						len++;
						i += 2;
						break;
					case '\0':
						write(1, "", 1);
						return (len);
						/*i += 2;
						break;*/
					default:
						/*write(1, &format[i], 1);*/
						write(1, &format[i + 1], 1);
						len++;
						i += 2;
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
		write(1, "\n", 1);
		return (len);
	}
	va_end(parameters);
	return (len);
}
