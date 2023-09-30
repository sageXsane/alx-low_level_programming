#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
int clear_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
unsigned int power_2(int exp);
int getsize(const char *s);
void print_binary(unsigned long int n);
#endif
