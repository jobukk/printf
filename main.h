#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>


int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list value);
int print_S(va_list value);
int _strlen(const char *s);
int print_percent(void);


#endif
