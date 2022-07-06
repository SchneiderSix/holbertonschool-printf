#include "main.h"

int format_switch(char a, va_list prmt)
{
	char ch, *p;
	int cont = 0, len = 0;

	switch (a)
	{
		case 'c':
			ch = va_arg(prmt, int);
			write(1, &ch, 1);
			cont++;

	}
}
