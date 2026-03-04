#include "unity.h"
#include "calculator.h"

// Runs BEFORE each test
void setUp(void) {
}

// Runs AFTER each test
void tearDown(void) {
}

// Test case
void test_add_positive_numbers(void) {
    TEST_ASSERT_EQUAL(5, add(2, 3));  // Expect 2 + 3 = 5
}

int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_add_positive_numbers);

    return UNITY_END();
}