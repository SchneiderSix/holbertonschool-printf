#include "main.h"
/**
* print_char - prints a char
* @a: the char
*Return: j
*/
int print_char(char a)
{
	int j = 1;

	write(1, &a, 1);
	return (j);
}
/**
* print_string - prints a string
* @s: the string
*
*Return: the length of the string
*/
int print_string(char *s)
{
	int len;

	if (s == NULL)
	{
		print_char('(');
		print_char('n');
		print_char('u');
		print_char('l');
		print_char('l');
		print_char(')');
		len = 6;
		return (len);

	}
	for (len = 0; s[len] != '\0'; len++)
	{
		write(1, &s[len], 1);
	}
	return (len);
}
/**
* just_in_case - checks format[i + 1]
* @a: format[i + 1]
*
*Return: the amount of chars printed
*/
int just_in_case(char a)
{
	int b = 1;

	if (a != '%')
	{
		write(1, "%", 1);
		write(1, &a, 1);
		b++;
		return (b);
	}
	write(1, "%", 1);
	return (b);
}
/**
* print_number - prints a number to a string
* @num: the number
* @buff: the buffer
* @base: the base
*Return: the amount of numbers printed
*/
int print_number(int num, char *buff, int base)
{
	int i = 0, negative = 0, len = 0, res;

	if (num == 0)
	{
		buff[i++] = '0';
		buff[i] = '\0';
		print_string(buff);
		len += 1;
		return (len);
	}

	if (num < 0 && base == 10)
	{
		negative = 1;
		num *= -1;
	}

	while (num != 0)
	{
		res = num % base;
		buff[i++] = (res > 9)? (res - 10) + 'a' : res + '0';
		len++;
		num /= base;
	}

	if (negative == 1)
	{
		buff[i++] = '-';
		len++;
	}
	buff[i] = '\0';	
	rev(buff);
	print_string(buff);
	return (len);
}
/**
* rev - reverses a string
* @s: the string
*Return: void function...
*
*/
void rev(char *s)
{
	int len, i, temp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i -1];
		s[len - i - 1] = temp;
	}
}
