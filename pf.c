#include "main.h"
/**
* _printf - Copy of the original printf() C Function
* @format: the parameters to print
*Return: the amount of chars printed :)
*/
int _printf(const char *format, ...)
{
	va_list parameters;
	int i = 0, j=0;

	va_start(parameters, format);
	while (format && format[i])
	{
		if(format[i] == '%')
		{
			i++;
      			switch (format[i]) 
			{
        			case 'c':
					print_char(va_arg(parameters, int));
					j++;
          				break;
				/*case 'd':
					j += print_per_d(va_arg(parameters, int));
        				break;
				case 'i':
					j += print_per_d(va_arg(parameters, int));
					break;*/
				case 's':
					j += print_string(va_arg(parameters, char *));
					break;
				case '%':
					print_char('%');
					j++;
					break;
				case '\0':
					return (-1);
				default:
					j += just_in_case(va_arg(parameters, int));
					break;
			}
        	}
    		else
		{
			write(1, &format[i], 1);
      			j++;
		}
		i++;
  	}
  va_end(parameters);
  return (j);
}
