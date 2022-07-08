#include "main.h"
int pi(int num)
{
	unsigned int a = num;
	int len = 0;

	if (num < 0)
	{
		print_char('-');
		num = -num;
	}

	if (num > 9) pi(num/10);

	print_char('0'+ (a%10));
	return (len);
}

int print (char * format, ...)
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
		j += print_char(va_arg(parameters, int));
          	break;
        }
        /* Convert decimal */
        case 'd': {
          j += pi(va_arg(parameters, int));
          break;
        }
	case 'i': {
		j += pi(va_arg(parameters, int));
		break;
	}
        /* Convert hex */
        case 'x': {
          //_itoa(va_arg( vl, int ), tmp, 16);
          //strcpy(&buff[j], tmp);
          //j += strlen(tmp);
          break;
        }
        /* Convert octal */
        case 'o': {
          //_itoa(va_arg( vl, int ), tmp, 8);
          //strcpy(&buff[j], tmp);
          //j += strlen(tmp);
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
  write(1, &format[i], 1);
  va_end(parameters);
  return (j);
}
/*int main (int argc, char *argv[])
{
  int ret;
  ret = print("%c %d %o %x %s\n", 'A', INT_MAX, 100, 1000, "Hello from printf!");
  printf("printf returns %d bytes\n", ret);
  print("%c\n%c\n%s\n%s\n%d\n%d", 'a', 'b', "hello", "rip", 10, 11);
  return 0;
}*/
