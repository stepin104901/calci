#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <function.h>
#include <string.h>
#define PROJECT_NAME "Function"

/* Prototypes for all the test functions */
void test_multiplication(void);
void test_subtraction(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

/* Add your test functions in this format for testing*/
  CU_add_test(suite, "multiplication", test_multiplication);
  CU_add_test(suite, "subtraction", test_subtraction);


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
void multiplication(void) {
  CU_ASSERT(12== multiplication(6,2));
  CU_ASSERT(21== multiplication(7,3));
  CU_ASSERT(75==multiplication(15,5));
  CU_ASSERT(81 == multiplication(9,9));
  CU_ASSERT( 20== multiplication(10,2));

  /* Dummy fail*/
  CU_ASSERT(15 == multiplication(4,3));
}

void subtraction(void) {
  CU_ASSERT(5== subtraction(10,5));
  CU_ASSERT(2  == subtraction(7,5));
  CU_ASSERT( 1 == subtraction(3,-2));
  CU_ASSERT(3 == subtraction(6,3));

  /* Dummy fail*/
  CU_ASSERT( 4== subtraction(8,2));
}
