#include "main.h"

print_char(a)
{
	write(1, a, 1);
}
print_string(b)
{
	int i;
	for(i = 0; b[i] != '\0'; i++)
	{
		write(1, &b[i], 1);
	}
}
