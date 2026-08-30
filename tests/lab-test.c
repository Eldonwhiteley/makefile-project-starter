#include <stdlib.h>
#include <stdio.h>
#include "harness/unity.h"
#include "../src/lab.h"


void setUp(void) {
  printf("Setting up tests...\n");
}

void tearDown(void) {
  printf("Tearing down tests...\n");
}

void test_get_greeting(void) {
  char *greeting = get_greeting("Alice");
  TEST_ASSERT_NOT_NULL(greeting);
  TEST_ASSERT_EQUAL_STRING("Hello, Alice!", greeting);
  free(greeting); // Free the allocated memory for the greeting

  greeting = get_greeting(NULL);
  TEST_ASSERT_NULL(greeting);

  greeting = get_greeting("");
  TEST_ASSERT_NOT_NULL(greeting);
  TEST_ASSERT_EQUAL_STRING("Hello, !", greeting);
  free(greeting);
}

void test_get_product(void) {
  int prod_expected = 35;
  int factor1 = 7;
  int factor2 = 5;

  int product = get_product(factor1, factor2);
  TEST_ASSERT_EQUAL_INT(prod_expected, product);
}

void test_get_bad_sum(void) {
  int sum_expected = 15;
  int addend1 = 7;
  int addend2 = 8;

  int sum = get_bad_sum(addend1, addend2);
  TEST_ASSERT_NOT_EQUAL_INT(sum_expected, sum);
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_get_greeting);
  RUN_TEST(test_get_product);
  RUN_TEST(test_get_bad_sum);
  return UNITY_END();
}
