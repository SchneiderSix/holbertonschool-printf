#include "main.h"
#include "main.h"

void s_printf(const char *fmt, ...)
{
	int per = 0;
	va_list (prmt);

	va_start(prmt, fmt);
	while(*fmt)
	{
		if (per == 0)
		{
			if (*fmt == '%')
			{
				per = 1;
			}
			else
			{
				write(1, &fmt, 1);
			}
		} else if (per == 1)
		{
			switch (*fmt)
			{
				case 'c':
				{
					char ch = va_arg(prmt, int);
					write(1, &ch, 1);
					break;
				}
				case 's':
				{
					char *s = (char*) va_arg(prmt, const char*);
					print_string(s);
					break;
				}
			}
			per = 0;
		}
		fmt++;
	}
	va_end(prmt);
}
