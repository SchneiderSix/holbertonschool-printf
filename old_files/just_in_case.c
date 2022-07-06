#include "main.h"
/**
* just_in_case - checks format[i] and format[i + 1]
* @a: format[i]
* @s: format[i + 1]
*Return: void function
*/
int just_in_case(char a, char s)
{
	int length = 0;
	if (s == a && s != '\0')
	{
		write(1, &a, 1);
		write(1, &s, 1);
		length += 2;
	} else if (s != '\0' && s != a)
	{
		write(1, &a, 1);
		write(1, &s, 1);
		length += 2;
	} else if (s == '\0' && a == '%')
	{
		write(1, "", 1);
		length = 0;
	}
	return (length);
}
