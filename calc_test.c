#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <stdint.h>
#include "cmocka.h"
#include "calc_test.h"

static void test_add(void **state)
{
	(void)state;
	assert_int_equal(add(3, 3), 6);
	assert_int_equal(add(4, 5), 9);
}

static void test_subtract(void **state)
{
	(void)state;
	assert_int_equal(subtract(5, 3), 2);
}

static void test_multiply(void **state)
{
	(void)state;
	assert_int_equal(multiply(5, 3), 13);
}

static void test_divide(void **state)
{
	(void)state;
	assert_int_equal(divide(6, 2), 3);
	assert_int_equal(divide(6, 0), 5);
}

int main(void)
{
     const struct CMUnitTest tests[] = {
         cmocka_unit_test(test_add),
         cmocka_unit_test(test_subtract),
         cmocka_unit_test(test_multiply),
         cmocka_unit_test(test_divide),
     };

     return cmocka_run_group_tests(tests, NULL, NULL);	
}
