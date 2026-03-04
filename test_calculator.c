#include "unity.h"
#include "calculator.h"

// Runs BEFORE each test
void setUp(void) {
}

// Runs AFTER each test
void tearDown(void) {
}

// Test positive numbers
void test_add_positive_numbers(void) {
    TEST_ASSERT_EQUAL(5, add(2, 3)); // Expect 2 + 3 = 5
}

// Test positive and negative numbers
void test_add_positive_and_negative_numbers(void) {
    TEST_ASSERT_EQUAL(1, add(5, -4)); // Expect 5 + (-4) = 1
}

int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_add_positive_numbers);
    RUN_TEST(test_add_positive_and_negative_numbers);

    return UNITY_END();
}