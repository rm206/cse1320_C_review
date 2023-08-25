/*
Next up - strings

*/
#include <stdio.h>
#include <stdlib.h>

#include <string.h>

int main()
{
    // what is a string in C?
    // an array of characters (almost)

    char s[] = {'H', 'e', 'l', 'p'};
    printf("Size of s : %lu\n", sizeof(s));
    printf("Characters of s : \n");
    // let's look at all chars of s
    for (int i = 0; i < sizeof(s) / sizeof(s[0]); i++) // sizeof(s) / sizeof(s[0]) is 4
    {
        printf("%c- ", s[i]);
    }
    printf("\n\n");

    // here is what is different about strings - they are arrays of characters that end with a NULL TERMINATOR
    char real_string[] = "Real";
    printf("Size of real_string : %lu\n", sizeof(real_string));

    // why is the size of real_string 5?
    // because of the NULL TERMINATOR!
    // but we only typed 4 characters
    // where is the NULL TERMINATOR?
    // here is another way to define a string

    char real_string_2[] = {'R', 'e', 'a', 'l', '\0'};
    printf("Size of resl_string_2 : %lu\n", sizeof(real_string_2));

    for (int i = 0; i < sizeof(real_string) / sizeof(real_string[0]); i++)
    {
        printf("%c- ", real_string[i]);
    }
    printf("\n\n");

    // why use strings instead of arrays of characters?
    // because of the functions that are available to us
    // strlen, strcpy, strcat, strcmp, etc.

    // we are going to look up what each of this function does online
    // this is a good exercise for the future
    // here is what each function does -
    // strlen - returns the length of the string
    // strcpy - copies the contents of one string to another
    // strcat - concatenates two strings
    // strcmp - compares two strings
    // - returns 0 if they are equal, -1 if the first string is smaller, 1 if the second string is smaller
    // - smaller means comes first in the dictionary

    // one example - strlen
    printf("Length of real_string : %lu\n", strlen(real_string));

    // strlen won't work with an arrays of characters
    // the reason is that strlen looks for the NULL TERMINATOR to determine the length of the string

    // following should not work but it works - why?
    char s2[] = {'H', 'e', 'l', 'p', 'a', 'e'};
    printf("Length of s2 : %lu\n", strlen(s2));

    // we can make our own strlen
    // we can use a loop to count the number of characters in the array
    // until we reach the NULL TERMINATOR

    int self_strlen = 0;
    int j = 0;
    while (real_string[j] != '\0')
    {
        self_strlen++;
        j++;
    }
    printf("Length of real_string : %d\n", self_strlen);

    return EXIT_SUCCESS;
}