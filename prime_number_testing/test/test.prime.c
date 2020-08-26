#include<stdbool.h>
#include "../unity/unity.h"
#include "F:\codeblocks\prime\prime_number\inc\prime.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_prime(void)
{
    TEST_ASSERT_EQUAL(false,check(4));
    TEST_ASSERT_EQUAL(true,check(5));
}

void test_prime_zero(void)
{
    TEST_ASSERT_EQUAL(false,check(0));
}

void test_prime_one(void)
{
    TEST_ASSERT_EQUAL(false,check(1));
}
/*
void test_prime_neg(void)
{
    TEST_ASSERT_EQUAL(void,check(-4));
}
*/
int test_main(void)
{
    /* Initiate the Unity Test Framework */
  UNITY_BEGIN();
  /* Run Test functions */
  RUN_TEST(test_prime);
  RUN_TEST(test_prime_zero);
  RUN_TEST(test_prime_one);
  //RUN_TEST(test_prime_neg);

  /* Close the Unity Test Framework */
  return UNITY_END();

}
