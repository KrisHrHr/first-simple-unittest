#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <setjmp.h>
#include <stdint.h>
#include <stdio.h>
#include "cmocka.h"
#include "assert.h"

int add(int, int);
int subtract(int, int);
int multiply(int, int);
float divide(int, int);

int add(int a, int b)
{
	return a + b;
}

int subtract(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}

float divide(int a, int b)
{
	assert_true(b);
	return (float)a / (float)b;
}
