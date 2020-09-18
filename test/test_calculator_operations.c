#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_modulus(void);
void test_primenumber(void);
void test_greater(void);
void test_smaller(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "modulus", test_modulus);
  CU_add_test(suite, "primenumber", test_primenumber);
  CU_add_test(suite, "greater", test_greater);
  CU_add_test(suite, "smaller", test_smaller);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(30 == add(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == subtract(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}
void test_modulus(void) {
  CU_ASSERT(3 == divide(10, 7));
  
  /* Dummy fail*/
  CU_ASSERT(1 == divide(2, 2));
}
void test_primenumber(void) {
  CU_ASSERT(1 == primenumber(5));
  
  /* Dummy fail*/
  CU_ASSERT(0 == primenumber(2));
}
void test_greater(void) {
  CU_ASSERT(10 == greater(10, 7));
  
  /* Dummy fail*/
  CU_ASSERT(1 == greater(2, 1));
}
void test_smaller(void) {
  CU_ASSERT(7 == smaller(10, 7));
  
  /* Dummy fail*/
  CU_ASSERT(4 == divide(4, 2));
}
