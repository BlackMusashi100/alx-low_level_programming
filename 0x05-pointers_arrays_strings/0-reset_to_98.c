#include "main.h"
#include <stdio.h>

/* 
 * main - check the code
 *
 * Return: Always 0.
 */

int void reset_to_98(int *n)
{
int n;
int *p;

n = 98;
p = &n;
_putchar("Address of 'n': %p\n", &n);
_putchar("value of 'p': %p\n", p);
return (0);
}
