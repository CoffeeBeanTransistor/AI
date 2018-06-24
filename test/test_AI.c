#include "unity.h"
#include "AI.h"
#include <malloc.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_string_compare_given_Hello_and_Hello_expect_1(void)
{
    TEST_ASSERT_EQUAL(1, StringCompare("Hello", "Hello"));
}

void test_string_compare_given_MuMbo_juMbO_and_mambo_Jumbo_expect_1(void)
{
    TEST_ASSERT_EQUAL(1,StringCompare("MaMbo juMbO", "mambo Jumbo"));
}

void test_string_compare_given_Rambo_and_Rambu_expect_0(void)
{
    TEST_ASSERT_EQUAL(0, StringCompare("Rambo", "Rambu"));
}

void test_string_compare_given_Hello_and_Hell_expect_0(void)
{
    TEST_ASSERT_EQUAL(0, StringCompare("Hello", "Hell"));
}

void test_string_compare_given_Hell_and_Hello_expect_0(void)
{
    TEST_ASSERT_EQUAL(0, StringCompare("Hell", "Hello"));
}

void test_given_sentence_contains_my_name_is_or_not (void)
{
    TEST_ASSERT_EQUAL(1, StringContain("My NaMe Is jAcKy", "My name is "));
}

void test_given_My_name_is_Wong_Yik_Kai_expect_Wong_Yik_Kai_is_extracted (void)
{
    char  *Reply = ExtractName("My name is Wong Yik Kai.");
    TEST_ASSERT_EQUAL_STRING ("Wong Yik Kai",Reply);
}

void test_given_Nice_to_meet_you_and_Wong_Yik_Kai_expect_they_are_concatenated (void)
{
    char  *Reply = StringCat ("Today is ", "Sunday");
    TEST_ASSERT_EQUAL_STRING ("Today is Sunday.",Reply);
}

void test_speakToAIMachine_Given_Hello_Hi_Hey_Greetings_expect_Hi_there_my_name_is_themachine_What_is_yours(void)
{
    char  *ExpectedReply = "Hi there! My name is TheMachine. What is yours?";
    char  *Reply = SpeakToAIMachine1("Hey");
    TEST_ASSERT_EQUAL (GetStringLength(ExpectedReply), GetStringLength(Reply));
    TEST_ASSERT_EQUAL_STRING (ExpectedReply,Reply);
}

void test_speakToAIMachine_Given_Other_Than_Hello_Hi_Hey_Greetings_expect_Error (void)
{
    char  *ExpectedReply = "Error!";
    char  *Reply = SpeakToAIMachine1("Hellooo");
    TEST_ASSERT_EQUAL (GetStringLength(ExpectedReply), GetStringLength(Reply));
    TEST_ASSERT_EQUAL_STRING (ExpectedReply,Reply);
}

void test_speakToAIMachine2_Given_A_Name_From_User_expect_Nice_To_Meet_You_Username (void)
{
    char  *ExpectedReply = "Nice to meet you, Wong Yik Kai.";
    char  *Reply = SpeakToAIMachine2("My name is Wong Yik Kai.");
    TEST_ASSERT_EQUAL (GetStringLength(ExpectedReply), GetStringLength(Reply));
    TEST_ASSERT_EQUAL_STRING (ExpectedReply,Reply);
}

void test_speakToAIMachine2_Given_Wrong_Reply_expect_Error (void)
{
    char  *ExpectedReply = "Error!";
    char  *Reply = SpeakToAIMachine2("My nameis Wong Yik Kai");
    TEST_ASSERT_EQUAL (GetStringLength(ExpectedReply), GetStringLength(Reply));
    TEST_ASSERT_EQUAL_STRING (ExpectedReply,Reply);
}

void test_speakToAIMachine3_Given_Bye_expect_Goodbye_Have_a_Nice_Day (void)
{
    char  *ExpectedReply = "Goodbye. Have a nice day!";
    char  *Reply = SpeakToAIMachine3("Bye");
    TEST_ASSERT_EQUAL (GetStringLength(ExpectedReply), GetStringLength(Reply));
    TEST_ASSERT_EQUAL_STRING (ExpectedReply,Reply);
}

void test_speakToAIMachine3_Given_Other_Than_Bye_expect_Error (void)
{
    char  *ExpectedReply = "Error!";
    char  *Reply = SpeakToAIMachine3("Good night");
    TEST_ASSERT_EQUAL (GetStringLength(ExpectedReply), GetStringLength(Reply));
    TEST_ASSERT_EQUAL_STRING (ExpectedReply,Reply);
}
