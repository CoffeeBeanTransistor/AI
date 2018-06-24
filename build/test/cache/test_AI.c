#include "build/temp/_test_AI.c"
#include "AI.h"
#include "unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_string_compare_given_Hello_and_Hello_expect_1(void)

{

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((StringCompare("Hello", "Hello"))), (

   ((void *)0)

   ), (UNITY_UINT)(15), UNITY_DISPLAY_STYLE_INT);

}



void test_string_compare_given_MuMbo_juMbO_and_mambo_Jumbo_expect_1(void)

{

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((StringCompare("MaMbo juMbO", "mambo Jumbo"))), (

   ((void *)0)

   ), (UNITY_UINT)(20), UNITY_DISPLAY_STYLE_INT);

}



void test_string_compare_given_Rambo_and_Rambu_expect_0(void)

{

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((StringCompare("Rambo", "Rambu"))), (

   ((void *)0)

   ), (UNITY_UINT)(25), UNITY_DISPLAY_STYLE_INT);

}



void test_string_compare_given_Hello_and_Hell_expect_0(void)

{

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((StringCompare("Hello", "Hell"))), (

   ((void *)0)

   ), (UNITY_UINT)(30), UNITY_DISPLAY_STYLE_INT);

}



void test_string_compare_given_Hell_and_Hello_expect_0(void)

{

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((StringCompare("Hell", "Hello"))), (

   ((void *)0)

   ), (UNITY_UINT)(35), UNITY_DISPLAY_STYLE_INT);

}



void test_given_sentence_contains_my_name_is_or_not (void)

{

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((StringContain("My NaMe Is jAcKy", "My name is "))), (

   ((void *)0)

   ), (UNITY_UINT)(40), UNITY_DISPLAY_STYLE_INT);

}



void test_given_My_name_is_Wong_Yik_Kai_expect_Wong_Yik_Kai_is_extracted (void)

{

    char *Reply = ExtractName("My name is Wong Yik Kai.");

    UnityAssertEqualString((const char*)(("Wong Yik Kai")), (const char*)((Reply)), (

   ((void *)0)

   ), (UNITY_UINT)(46));

}



void test_given_Nice_to_meet_you_and_Wong_Yik_Kai_expect_they_are_concatenated (void)

{

    char *Reply = StringCat ("Today is ", "Sunday");

    UnityAssertEqualString((const char*)(("Today is Sunday.")), (const char*)((Reply)), (

   ((void *)0)

   ), (UNITY_UINT)(52));

}



void test_speakToAIMachine_Given_Hello_Hi_Hey_Greetings_expect_Hi_there_my_name_is_themachine_What_is_yours(void)

{

    char *ExpectedReply = "Hi there! My name is TheMachine. What is yours?";

    char *Reply = SpeakToAIMachine1("Hey");

    printf("%s\n", Reply);

    UnityAssertEqualNumber((UNITY_INT)((GetStringLength(ExpectedReply))), (UNITY_INT)((GetStringLength(Reply))), (

   ((void *)0)

   ), (UNITY_UINT)(60), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualString((const char*)((ExpectedReply)), (const char*)((Reply)), (

   ((void *)0)

   ), (UNITY_UINT)(61));

}



void test_speakToAIMachine_Given_Other_Than_Hello_Hi_Hey_Greetings_expect_Error (void)

{

    char *ExpectedReply = "Error!";

    char *Reply = SpeakToAIMachine1("Hellooo");

    printf("%s\n", Reply);

    UnityAssertEqualNumber((UNITY_INT)((GetStringLength(ExpectedReply))), (UNITY_INT)((GetStringLength(Reply))), (

   ((void *)0)

   ), (UNITY_UINT)(69), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualString((const char*)((ExpectedReply)), (const char*)((Reply)), (

   ((void *)0)

   ), (UNITY_UINT)(70));

}



void test_speakToAIMachine2_Given_A_Name_From_User_expect_Nice_To_Meet_You_Username (void)

{

    char *ExpectedReply = "Nice to meet you, Wong Yik Kai.";

    char *Reply = SpeakToAIMachine2("My name is Wong Yik Kai.");

    printf("%s\n", Reply);

    UnityAssertEqualNumber((UNITY_INT)((GetStringLength(ExpectedReply))), (UNITY_INT)((GetStringLength(Reply))), (

   ((void *)0)

   ), (UNITY_UINT)(78), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualString((const char*)((ExpectedReply)), (const char*)((Reply)), (

   ((void *)0)

   ), (UNITY_UINT)(79));

}



void test_speakToAIMachine2_Given_Wrong_Reply_expect_Error (void)

{

    char *ExpectedReply = "Error!";

    char *Reply = SpeakToAIMachine2("My nameis Wong Yik Kai");

    printf("%s\n", Reply);

    UnityAssertEqualNumber((UNITY_INT)((GetStringLength(ExpectedReply))), (UNITY_INT)((GetStringLength(Reply))), (

   ((void *)0)

   ), (UNITY_UINT)(87), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualString((const char*)((ExpectedReply)), (const char*)((Reply)), (

   ((void *)0)

   ), (UNITY_UINT)(88));

}



void test_speakToAIMachine3_Given_Bye_expect_Goodbye_Have_a_Nice_Day (void)

{

    char *ExpectedReply = "Goodbye. Have a nice day!";

    char *Reply = SpeakToAIMachine3("Bye");

    printf("%s\n", Reply);

    UnityAssertEqualNumber((UNITY_INT)((GetStringLength(ExpectedReply))), (UNITY_INT)((GetStringLength(Reply))), (

   ((void *)0)

   ), (UNITY_UINT)(96), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualString((const char*)((ExpectedReply)), (const char*)((Reply)), (

   ((void *)0)

   ), (UNITY_UINT)(97));

}



void test_speakToAIMachine3_Given_Other_Than_Bye_expect_Error (void)

{

    char *ExpectedReply = "Error!";

    char *Reply = SpeakToAIMachine3("Good night");

    printf("%s\n", Reply);

    UnityAssertEqualNumber((UNITY_INT)((GetStringLength(ExpectedReply))), (UNITY_INT)((GetStringLength(Reply))), (

   ((void *)0)

   ), (UNITY_UINT)(105), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualString((const char*)((ExpectedReply)), (const char*)((Reply)), (

   ((void *)0)

   ), (UNITY_UINT)(106));

}
