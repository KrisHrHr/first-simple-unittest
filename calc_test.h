#ifndef CALC_TEST_H
#define CALC_TEST_H

#include "calc_beg.h"

extern int add(int a, int b);
extern int subtract(int a, int b);
extern int multiply(int a, int b);
extern float divide(int a, int b);

static void test_add(void **state);
static void test_subtract(void **state);
static void test_multiply(void **state);
static void test_divide(void **state);

#endif
