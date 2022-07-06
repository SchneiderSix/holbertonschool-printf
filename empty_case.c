#include "main.h"

int empty_case(char a, char b)
{
	int k = 0;
	if (a == '\0' && b == '%')
	{
		write(1, "", 1);
		k = 0;
	}
	else
	{
		write(1, &b, 1);
		k++;
	}
	return (k);

}
