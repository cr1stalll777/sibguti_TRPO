#ifndef TEST_FUNC_H
#define TEST_FUNC_H

extern "C" {
#include <CUnit/Basic.h>
}
#include "../src/func.h"

// Part 1. test of max value
void test_max_value_integer(void);
void test_max_value_float(void);

// Part 2. test of positive value in array
void test_positive_numbers_in_array_float(void);
void test_positive_numbers_in_array_integer(void);

// Part 3. test of negative value in array
void test_negative_numbers_in_array_float(void);
void test_negative_numbers_in_array_integer(void);

// Part 4. test of max value in array
void test_max_value_in_array_integer(void);
void test_max_value_in_array_float(void);

// Part 5. test min value in array
void test_min_value_in_array_integer(void);
void test_min_value_in_array_float(void);

// Part 6. test average value in array
void test_average_value_in_array_float(void);

// Part 7. test find value in array
void test_find_in_array(void);
void test_not_find_in_array(void);

// Part 8. test return counter equal value in array
void test_counter_if_equal_in_array(void);
void test_counter_if_not_equal_in_array(void);

// Part 9.
void test_counter_if_gt_in_array(void);

// Part 10. 

void test_delete_spase_start_end_string(void);
#endif