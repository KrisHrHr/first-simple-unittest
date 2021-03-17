#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <setjmp.h>
#include <stdint.h>
#include <stdio.h>
#include "cmocka.h"
#include "assert.h"
#include "calc_beg.h"

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
