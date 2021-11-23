#include "unity.h"
#include "unity_internals.h"
#include "header.h"

#define PROJECT_NAME "QUIZ"
/**
 * @brief  Required by the unity test framework
 * 
 */
void setUp () {} 

void tearDown () {}

void test_score_pos_r1(void)
{
    TEST_ASSERT_EQUAL(10, score_pos_r1(5));
}

void test_score_neg_r1(void)
{
    TEST_ASSERT_EQUAL(3, score_neg_r1(5));
}

void test_score_pos_r2(void)
{
    TEST_ASSERT_EQUAL(17, score_pos_r2(12));
}

void test_score_neg_r2(void)
{
    TEST_ASSERT_EQUAL(7, score_neg_r2(8));
}

void test_final_score(void)
{
    TEST_ASSERT_EQUAL(15, final_score(4, 5, 6));
}


int main(){ 
    /*Initiate the Unity Test Framework*/
    UNITY_BEGIN();

    RUN_TEST(test_score_pos_r1);
    RUN_TEST(test_score_neg_r1);
    RUN_TEST(test_score_pos_r2);
    RUN_TEST(test_score_neg_r2);
    RUN_TEST(test_final_score);
    
   
    /*Close the Unity Test Framework*/
    return UNITY_END();
}