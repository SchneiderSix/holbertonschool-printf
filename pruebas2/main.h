#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>

int _printf(const char *format, ...);
int print_char(char a);
int print_string(char *a);
int just_in_case(char a);
int print_number(int j);
/*char *rev(char *s, int a, int b);
void swap(char *a, char *b);*/
#endif
