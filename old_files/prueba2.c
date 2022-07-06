#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	/*int len, len2;

	len = _printf("%c", 'S');
	len2 = printf("%c", 'S');
	fflush(stdout);
	if (len != len2)
	{
        printf("\nlen1: %d\nlen2: %d\n", len, len2);
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	printf("\nlen1: %d\nlen2: %d\n", len, len2);
	_printf("%s", "Hola");
	s_printf("%c %s Hola\n", 'H', "Hola");
	_printf("%%\n");
	_printf("%a\n");
	_printf("%");*/
	s_printf("%c %s Hola", 'H', "Hola");
	return (0);
}
