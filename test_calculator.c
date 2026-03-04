#include "unity.h"
#include "calculator.h"
#include <limits.h>

// Runs BEFORE each test
void setUp(void) {
}

// Runs AFTER each test
void tearDown(void) {
}

// Test positive numbers
void test_add_positive_numbers(void) {
    TEST_ASSERT_EQUAL(5, add(2, 3)); // 2 + 3 = 5
}

// Test positive and negative numbers
void test_add_positive_and_negative_numbers(void) {
    TEST_ASSERT_EQUAL(1, add(5, -4)); // 5 + (-4) = 1
}

// Test negative numbers
void test_add_negative_numbers(void) {
    TEST_ASSERT_EQUAL(-7, add(-3, -4)); // -3 + -4 = -7
}

// Test adding zero
void test_add_zero(void) {
    TEST_ASSERT_EQUAL(5, add(5, 0)); // 5 + 0 = 5
}

// Test integer overflow
void test_add_overflow(void) {
    int result = add(INT_MAX, 1);
    TEST_ASSERT_TRUE(result < 0); // overflow should wrap to negative
}

// Test integer underflow
void test_add_underflow(void) {
    int result = add(INT_MIN, -1);
    TEST_ASSERT_TRUE(result > 0); // underflow should wrap to positive
}

int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_add_positive_numbers);
    RUN_TEST(test_add_positive_and_negative_numbers);
    RUN_TEST(test_add_negative_numbers);
    RUN_TEST(test_add_zero);
    RUN_TEST(test_add_overflow);
    RUN_TEST(test_add_underflow);

    return UNITY_END();
}