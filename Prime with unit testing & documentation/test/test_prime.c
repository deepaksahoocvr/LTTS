#include "unity.h"
#include "prime.h"

//Required by the test unity framework
void setUp() {}

//Required by the unity framework
void tearDown() {}

void testing_prime_number(void)
{
    TEST_ASSERT_EQUAL(0, isprime(0));
    TEST_ASSERT_EQUAL(0, isprime(1));
    TEST_ASSERT_EQUAL(1, isprime(2));
    TEST_ASSERT_EQUAL(1, isprime(3));
}
void testing_forlarge_prime_number(void)
{
    TEST_ASSERT_EQUAL(0, isprime(110));
    TEST_ASSERT_EQUAL(1, isprime(17));
    TEST_ASSERT_EQUAL(1, isprime(47));
}
int test_main(void)
{
    //Initiating the unity framework
    UNITY_BEGIN();
    RUN_TEST(testing_prime_number);
    RUN_TEST(testing_forlarge_prime_number);
    return UNITY_END();
}
