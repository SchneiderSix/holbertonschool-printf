#include "main.h"
#define ABS(x) ((x) < 0 ? -(x) : (x))
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
	int n,i, len = 0, r;

	if (base < 2 || base > 32)
	{
		len = 0;
		print_string(buff);
		return (len);
	}
	n = ABS(num);
	i  = 0;
	if (num < 0 && base == 10)
	{
		buff[i++] = '-';
		num *= -1;
		len++;
	}
	while (n)
	{
		r = n % base;
		if (r >= 10)
		{
			buff[i++] = 65 + (r - 10);
			len++;
		}
		else
		{
			buff[i++] = 48 + r;
			len++;
		}
		n /= base;
	}
	if (i == 0)
	{
		buff[i++] = '0';
		len++;
	}
	buff[i] = '\0';
	rev(buff, 0, i - 1);
	print_string(buff);
	return (len);
}
/**
* rev - reverses a string
* @s: the string
*Return: void function...
*
*/
char *rev(char *s, int a, int b)
{
	while (a < b)
	{
		swap(&s[a++], &s[b--]);
	}
	return (s);
}

void swap(char *a, char *b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
