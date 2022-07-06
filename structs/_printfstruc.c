#include "main.h"

static int (*flags_check(const char *format))(va_list)
{
	unsigned int i;
	print_t p[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};
	return (p[i].flag);

	for (i = 0; p[i].po != NULL; i++)
	{
		if (*(p[i].po) == *format)
		{
			break;
		}
	}
	return (p[i].flag);
}		
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	char per = '%';
	va_list list;
	int (*flag)(va_list);

	if (format == NULL)
	{
		write(1, "", 1);
	}
	va_start(list, format);
	while (format[i])
	{
		for(; format[i] && format[i] != '%'; i++)
		{
			print_char;
			len++;
		}
		if(format[i] != per)
		{
			write(1, &format[i + 1], 1);
			len++;
		}
		else
		{
			write(1, &per, 1);
			len++;
		}
		i++;
	}
	va_end (list);
	return (len);
}
