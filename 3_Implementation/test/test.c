#include "unity.h"
#include "regist.h"

#define PROJECT_NAME    "Vehicle_Registration"

// Prototypes 
void test_regist_status(void);
void test_vehicle_status(void);

void setUp(){}

void tearDown(){}

int main()
{
  UNITY_BEGIN();

// Run Test functions for registration and vehicle status
  RUN_TEST(test_regist_status);
  RUN_TEST(test_vehicle_status);
  
  return UNITY_END();
}

// Test functions
void test_regist_status(void) {
  TEST_ASSERT_EQUAL(-1, regist_status(123));
  
  TEST_ASSERT_EQUAL(-1, regist_status(150)); // Fail condition
}

void test_vehicle_status(void) {
  TEST_ASSERT_EQUAL(1, vehicle_status(1));
  
  TEST_ASSERT_EQUAL(2, vehicle_status(1)); // Fail condition
}