#include "main.h"
#define ABS(x) ((x) < 0 ? -(x) : (x))
/**
* print_char - prints a char
* @a: the char
*Return: j
*/
void print_char(char a)
{
	write(1, &a, 1);
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
* print_per_d - prints the %d and %i flag
* @n: the number
*Return: the amount of nums printed
*/
int print_per_d(int n)
{
	unsigned int tmpNum, finalNum, len = 0, count;
	int num;

	count = 0;
	num = n;
	if (num < 0)
	{
		tmpNum = -num;
		count++;
		print_char('-');
	}
	else
		tmpNum = n;
	finalNum = tmpNum;
	len++;
	while (finalNum > 9)
	{
		finalNum /= 10;
		len = len * 10;
	}
	while (len >= 1)
	{
		print_char(((tmpNum / len) % 10) + '0');
		count++;
		len /= 10;
	}
	return (count);

}
