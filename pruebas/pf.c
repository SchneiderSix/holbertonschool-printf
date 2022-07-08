#include "main.h"

char *_strrev (char *str)
{
  int i;
  int len = 0;
  char c;
  if (!str)
    return NULL;
  while(str[len] != '\0'){
    len++;
  }
  for(i = 0; i < (len/2); i++)
  {
    c = str[i];
    str [i] = str[len - i - 1];
    str[len - i - 1] = c;
  }
  return str;
}

char * _itoa(int i, char *strout, int base)
{
  char *str = strout;
  int digit, sign = 0;
  if (i < 0 && i == INT_MIN) {
    sign = 1;
    i *= -1;
  }
  while(i) {
    digit = i % base;
    *str = (digit > 9) ? ('A' + digit - 10) : '0' + digit;
    i = i / base;
    str ++;
  }
  if(sign) {
  *str++ = '-';
  }
  *str = '\0';
  _strrev(strout);
  return strout;
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
          j += print_int(va_arg(parameters, int));
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
