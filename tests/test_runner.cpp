#include "test_func.h"

bool test_succes(CU_pTest result) {
  if(result == NULL) {
    return false;
  }

  return true;
}

int main(void) {
  if (CUE_SUCCESS != CU_initialize_registry()) return CU_get_error();

  CU_pSuite pSuite_part1 = CU_add_suite("Part 1. Suite_max_value", NULL, NULL);
  CU_pSuite pSuite_part2 = 
      CU_add_suite("Part 2. Suite_sum_positive_numbers", NULL, NULL);
  CU_pSuite pSuite_part3 = CU_add_suite("Part 3. Suite_sum_negative_numbers", NULL, NULL);
  CU_pSuite pSuite_part4 = CU_add_suite("Part 4. Suite_max_number", NULL, NULL);
  CU_pSuite pSuite_part5 = CU_add_suite("Part 5. Suite_min_number", NULL, NULL);
  CU_pSuite pSuite_part6 = CU_add_suite("Part 6. Suite_averange_number", NULL, NULL);
  CU_pSuite pSuite_part7 = CU_add_suite("Part 7. Suite_find_number", NULL, NULL);
  CU_pSuite pSuite_part8 = CU_add_suite("Part 8. Suite_equal_value", NULL, NULL);


  if (!pSuite_part1 || !pSuite_part2 || !pSuite_part3) {
    CU_cleanup_registry();
    return CU_get_error();
  }


  // Part 1. test of max value
  if (!test_succes(CU_add_test(pSuite_part1, "Test of max value integer",
                  test_max_value_integer))) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  if (!test_succes(CU_add_test(pSuite_part1, "Test of max value floats",
                  test_max_value_integer))) {
    CU_cleanup_registry();
    return CU_get_error();
  }


  // Part 2. test of positive value in array
  if (!test_succes(CU_add_test(pSuite_part2, "Test of sum positive value integers",
                  test_positive_numbers_in_array_integer))) {
    CU_cleanup_registry();
    return CU_get_error();
  }
  if (!test_succes(CU_add_test(pSuite_part2, "test of sum positive value floats",
                  test_positive_numbers_in_array_float))) {
    CU_cleanup_registry();
    return CU_get_error();
  }


  // Part 3. test of negative value in array
  if(!test_succes(CU_add_test(pSuite_part3, "test of sum negative value integers", test_negative_numbers_in_array_integer))) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  if(!test_succes(CU_add_test(pSuite_part3, "test of sum negative value floats", test_negative_numbers_in_array_float))) {
    CU_cleanup_registry();
    return CU_get_error();
  }


  // Part 4. test max value in array
  if(!test_succes(CU_add_test(pSuite_part4, "test max value int", test_max_value_in_array_integer))) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  if(!test_succes(CU_add_test(pSuite_part4, "test max value float", test_max_value_in_array_float))) {
    CU_cleanup_registry();
    return CU_get_error();
  }
  
  // Part 5. test min value in array
    if(!test_succes(CU_add_test(pSuite_part5, "test min value int", test_min_value_in_array_integer))) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  if(!test_succes(CU_add_test(pSuite_part5, "test min value float", test_min_value_in_array_float))) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  // Part 6. test average value in array
  if(!test_succes(CU_add_test(pSuite_part6, "test average value", test_average_value_in_array_float))) {
    CU_cleanup_registry();
    return CU_get_error();
  }

// Part 7. test find value in array 
  if(!test_succes(CU_add_test(pSuite_part7, "test find value", test_min_value_in_array_integer))) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  if(!test_succes(CU_add_test(pSuite_part7, "test not find value", test_min_value_in_array_float))) {
    CU_cleanup_registry();
    return CU_get_error();
  }

// Part 8. test return counter equal value in array
  if(!test_succes(CU_add_test(pSuite_part8, "test equal value", test_counter_if_equal_in_array))) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  if(!test_succes(CU_add_test(pSuite_part8, "test not equal value", test_counter_if_not_equal_in_array))) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();

  CU_cleanup_registry();
  return 0;
}