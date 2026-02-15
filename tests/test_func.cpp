#include "test_func.h"

// Part 1. test of max value
void test_max_value_integer(void) {
  CU_ASSERT_EQUAL(max_value(123, 3, 1), 123);
}

void test_max_value_float(void) {
  CU_ASSERT_DOUBLE_EQUAL(max_value<double>(123.2, 3131.2, 1.123), 3131.2,
                         0.0001);
}

// Part 2. test of positive value in array
void test_positive_numbers_in_array_integer(void) {
  int array[]{1, 2, 3, 4, -1, -2, -3, -4, 5};
  CU_ASSERT_EQUAL(filter_the_array<int>(array, [](auto a){ return a > 0; }),
                  15);
}

void test_positive_numbers_in_array_float(void) {
  double array[]{1.1, 2.2, 3.3, 4.4, -1.4, -2.55, -3.6, -4.456, 5.5};
  CU_ASSERT_DOUBLE_EQUAL(
      filter_the_array<double>(array, [](auto a){ return a > 0; }), 16.5,
      0.0001);
}

// Part 3. test of negative value in array
void test_negative_numbers_in_array_integer(void) {
  int array[]{1, 2, 3, 4, -1, -2, -3, -4, 5};
  CU_ASSERT_EQUAL(filter_the_array<int>(array, [](auto a){ return a < 0; }),
                  -10);
}

void test_negative_numbers_in_array_float(void) {
  double array[]{1.1, 2.2, 3.3, 4.4, -1.4, -2.55, -3.6, -4.456, 5.5};
  CU_ASSERT_DOUBLE_EQUAL(
      filter_the_array<double>(array, [](auto a){ return a < 0; }), -12.006,
      0.0001);
}

// Part 4. test of max value in array
void test_max_value_in_array_integer(void) {
    int array[]{1, 2, 3, 4, -1, -2, -3, -4, 5};
    CU_ASSERT_EQUAL(filter_the_array<int>(array, [](auto a, auto b){ return a < b; }),
                  5);
}

void test_max_value_in_array_float(void) {
    double array[]{1.1, 2.2, 3.3, 4.4, -1.4, -2.55, -3.6, -4.456, 5.5};
    CU_ASSERT_DOUBLE_EQUAL(filter_the_array<double>(array, [](auto a, auto b){ return a < b; }),
                  5.5, 0.0001);
}

// Part 5. test min value in array
void test_min_value_in_array_integer(void) {
    int array[]{1, 2, 3, 4, -1, -2, -3, -4, 5};
    CU_ASSERT_EQUAL(filter_the_array<int>(array, [](auto a, auto b){ return a > b; }),
                  -4);
}

void test_min_value_in_array_float(void) {
    double array[]{1.1, 2.2, 3.3, 4.4, -1.4, -2.55, -3.6, -4.456, 5.5};
    CU_ASSERT_DOUBLE_EQUAL(filter_the_array<double>(array, [](auto a, auto b){ return a > b; }),
                  -4.456, 0.0001);
}


// Part 6. test average value in array  
void test_average_value_in_array_float(void) {
    double array[]{1.0, 2.0, 3.0, 4.0};
    double expected = 10.0 / 4.0;
    double result = filter_the_array<double>(array, [](double a){ return true; }) / 4.0;

    CU_ASSERT_DOUBLE_EQUAL(result, expected, 0.0001);
}

// Part 7. test find value in array 
void test_find_in_array(void) {
    int array[]{1, 2, 3, 4, -1, -2, -3, -4, 5};
    CU_ASSERT_EQUAL(filter_the_array<int>(array, 5),
                  8);
}

void test_not_find_in_array(void) {
    int array[]{1, 2, 3, 4, -1, -2, -3, -4, 5};
    CU_ASSERT_EQUAL(filter_the_array<int>(array, 123),
                  -1);
}

// Part 8. test return counter equal value in array

void test_counter_if_equal_in_array(void) {
      int array[]{1, 2, 3, 4, -1, -2, -3, -4, 5};
    CU_ASSERT_EQUAL(filter_the_array<int>(array, [](int a, int b) {return a == b;} , 2),
                  1);
}

void test_counter_if_not_equal_in_array(void) {
      int array[]{1, 2, 3, 4, -1, -2, -3, -4, 5};
    CU_ASSERT_EQUAL(filter_the_array<int>(array, [](int a, int b) {return a == b;} , 12),
                  0);
}

// Part 9.
void test_counter_if_gt_in_array(void) {
      int array[]{1, 2, 3, 4, -1, -2, -3, -4, 5};
    CU_ASSERT_EQUAL(filter_the_array<int>(array, [](int a, int b) {return a < b;} , 1),
                  4);
}

// Part 10.
void test_delete_spase_start_end_string(void) {
      char string[] = "   Hello Artem!   ";
      const char* expected = "Hello Artem!";
    CU_ASSERT_STRING_EQUAL(delete_spase(string), expected);
}

