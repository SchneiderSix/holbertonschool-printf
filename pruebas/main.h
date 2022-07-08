#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>

char *_strrev (char *str);
char *_itoa(int i, char *strout, int base);
int print(char *format, ...);
int print_int(int num);
int num_len(int n);
void print_n(int n);
int print_char(char a);
int print_string(char *s);
int just_in_case(char a);

#endif /*MAIN_H*/
