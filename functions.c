#include "main.h"
#define ABS(x) ((x) < 0 ? -(x) : (x))
/**
* print_char - prints a char
* @a: the char
*Return: j
*/
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; j <= _strle(src); j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}

/*char *my_itoa(int num, char *buffer, int base)
{
	int curr = 0;

	if (num == 0)
	{
		buffer[curr++] = '\0';
		buffer[curr] = '\0';
		return buffer;
	}

	int num_digits = 0;

	if (num < 0)
	{
		if (base == 10)
		{
			num_digits++;
			buffer[curr] = '-';
			curr++;
			num *= -1;
		}
		else
			return NULL;
	}

	num_digits += (int)floor(log (num) / log(base)) + 1;
	while (curr < num_digits)
	{
		int base_val = (int) pow(base, num_digits - 1 - curr);
		int num_val = num / base_val;

		char value = num_val + '0';
		buffer[curr] = value;
		curr++;
		num -= base_val * num_val;
	}
	buffer[curr] = '\0';
	return buffer;
}*/
/*char *s_itoa(int num, int base)
{
	static char buff[32] = {0};
	int i = 30;

	for (; num && i; --i, num /= base)
	{
		buff[i] = "0123456789abcdef"[num % base];
	}
	rev_str(buff);
	return (buff);

}

void rev_str(char *s)
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
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}*/

int _strle(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

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
/*void print_n(int num)
{
	unsigned int n = num;

	if (n / 10 != 0)
	{
		print_n(n / 10);
	}
	print_char(n % 10 + 48);
}
int num_len(int n)
{
	int len = 0;
	unsigned int num = n;

	for (; n > 0; n / 10)
	{
		len++;
	}
	return (len);
}
int print_int(int num)
{
	unsigned int n = num; 
	int len = 0;

	if (n < 0)
	{
		len++;
		n *= -1;
		print_char('-');
	}
	if (n == 0)
	{
		len++;
	}
	print_n(n);
	len += num_len(n);
	return (len);
}

void pi(int num)
{
	unsigned int a = num;
	int len = 0;

	if (num < 0)
	{
		print_char('-');
		num = -num;
	}

	if (num > 9)
		pi(num / 10);
	print_char('0' + (a % 10));
}*/
