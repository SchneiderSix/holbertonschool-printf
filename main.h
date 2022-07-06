#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
void print_string(char *);
int just_in_case(char s, char a);
int format_switch(char a, va_list parameters);
int empty_case(char a, char b);

#endif
