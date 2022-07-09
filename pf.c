#include "main.h"

int _printf(const char *format, ...)
{
  va_list parameters;
  int i = 0, j=0;
  va_start(parameters, format);
  while (format && format[i])
  {
    if(format[i] == '%'){
      i++;
      switch (format[i]) {
        /* Convert char */
        case 'c': {
		print_char(va_arg(parameters, int));
		j++;
          	break;
        }
        /* Convert decimal */
        case 'd':
		j += print_per_d(va_arg(parameters, int));
        	break;
	case 'i': {
		j += print_per_d(va_arg(parameters, int));
		break;
	}
        /* Convert hex */
        case 'x': {
          /*_itoa(va_arg( vl, int ), tmp, 16);*/
          /*strcpy(&buff[j], tmp);*/
          /*j += strlen(tmp);*/
          break;
        }
        /* Convert octal */
        case 'o': {
          /*_itoa(va_arg( vl, int ), tmp, 8);*/
          /*strcpy(&buff[j], tmp);*/
          /*j += strlen(tmp);*/
          break;
        }
        /* copy string */
        case 's': {
          j += print_string(va_arg(parameters, char *));
          break;
        }
      }
    } else {
	write(1, &format[i], 1);
      	j++;
    }
    i++;
  }
  va_end(parameters);
  return (j);
}
