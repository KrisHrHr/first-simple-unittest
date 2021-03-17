#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <stdint.h>
#include "cmocka.h"

extern int add(int a, int b);
extern int subtract(int a, int b);
extern int multiply(int a, int b);
extern float divide(int a, int b);

static void add_test(void **state);
static void subtract_test(void **state);
static void multiply_test(void **state);
static void divide_test(void **state);


int main(void)
{
     const struct CMUnitTest tests[] = {
         cmocka_unit_test(add_test),
         cmocka_unit_test(subtract_test),
         cmocka_unit_test(multiply_test),
         cmocka_unit_test(divide_test),
     };

     return cmocka_run_group_tests(tests, NULL, NULL);	
}

static void add_test(void **state)
{
	(void)state;
	assert_int_equal(add(3, 3), 6);
	assert_int_equal(add(4, 5), 9);
}

static void subtract_test(void **state)
{
	(void)state;
	assert_int_equal(subtract(5, 3), 2);
}

static void multiply_test(void **state)
{
	(void)state;
	assert_int_equal(multiply(5, 3), 13);
}

static void divide_test(void **state)
{
	(void)state;
	assert_int_equal(divide(6, 2), 3);
	assert_int_equal(divide(6, 0), 5);
}
