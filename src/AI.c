#include "AI.h"
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>



char *SpeakToAIMachine1(char *str) {

    if (StringCompare(str,"hi") || StringCompare(str,"hey" ) ||
        StringCompare(str,"hello") || StringCompare(str,"greetings"))
      return "Hi there! My name is TheMachine. What is yours?";

    else
      return "Error!";
}


char *SpeakToAIMachine2(char *str) {

    char *Username, *AI_Reply;

    if (StringContain(str, "My name is "))
    {
      Username = ExtractName(str);
      AI_Reply = StringCat("Nice to meet you, ", Username);
      return AI_Reply;
    }

    else
      return "Error!";
}


char *SpeakToAIMachine3(char *str) {

    if (StringCompare(str,"bye") || StringCompare(str,"goodbye"))
      return "Goodbye. Have a nice day!";

    else
      return "Error!";
}


int StringCompare(char *str1, char *str2)
{
    char *strptr1;
    char *strptr2;
    int Length1, Length2, i;

    Length1 = GetStringLength(str1);
    Length2 = GetStringLength(str2);

    strptr1 = malloc(Length1+1);
    strptr2 = malloc(Length2+1);

    strptr1 = str1;
    strptr2 = str2;

    if (Length1 == Length2) {

      while (*(strptr1) != '\0' && *(strptr2) != '\0') {

          if (toupper(*(strptr1)) != toupper(*(strptr2)))
          return 0;

          else
          strptr1++;
          strptr2++;
      }
      return 1;
     }

    else
      return 0;
}


char *ExtractName(char *str) {

    int length = 0, i = 0, name_size = 0;
    char *extracted_name;

    length = GetStringLength(str);
    name_size = length - 10;
    extracted_name = malloc (name_size);
    str = (str + 11);

    while (i < name_size ) {

      if (*(str) == '.' || *(str) == '!'  ) {
        extracted_name[i] = '\0';
        return extracted_name;
      }

      extracted_name[i] = *str;
      str++;
      i++;

    }

    extracted_name[i] = '\0';

    return extracted_name;
}


char *StringCat (char *str1, char *str2) {

  int i, strlen1, strlen2, total_strlen;
  char *Concatenated_string;

  strlen1 = GetStringLength (str1);
  strlen2 = GetStringLength (str2);

  total_strlen = strlen1 + strlen2;

  Concatenated_string = malloc (total_strlen + 2);

  for (i = 0; i < strlen1; i++) {

    Concatenated_string[i] = *str1;
    str1++;

  }

  for (i; *(str2) != '\0'; i++) {

    Concatenated_string[i] = *str2;
    str2++;

  }

  Concatenated_string[i] = '.';
  Concatenated_string[i+1] = '\0';

  return Concatenated_string;
}


int StringContain (char *str1, char*str2) {

    char *strptr1;
    char *strptr2;
    int Length1, Length2;

    Length1 = GetStringLength(str1);
    Length2 = GetStringLength(str2);

    strptr1 = malloc(Length1+1);
    strptr2 = malloc(Length2+1);

    strptr1 = str1;
    strptr2 = str2;

    while (*(strptr2) != '\0') {

          if (toupper(*(strptr1)) != toupper(*(strptr2)))
          return 0;

          else {
          strptr1++;
          strptr2++;
          }
    }

      return 1;
}


int GetStringLength (char *str) {

  	int counter = 0;

  	if (str == NULL || str[0] == '\0') {	// Check if string is NULL or empty
			return 0;
		}

		else {

	    while (str[counter] != '\0') { //Counts string until '\0'
			counter++;
			}
			return counter;
		}
	}
