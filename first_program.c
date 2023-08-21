// header files - super important. These contain the functions so that
// we don't have to write them ourselves. Eg - printf, scanf, etc. (these are VERY important)
// More on this later
#include <stdio.h>
#include <stdlib.h>

// main function. this is where exceution starts. This is required for every
// C program.
// Note - C program, not necessarily every C file (a program can have multiple files)
int main()
{
    // Declaration and initialization of a variable named "a_variable" of type "int"
    // type vairable_name = value; -> declaration and initialization
    // or
    // type variable_name; -> declaration
    float a_variable = 6.2;
    printf("Hello CSE1320. 2+2 = %f\n", a_variable);
    printf("Wait that's not right\n");

    /*
    Could have used these
    multi-line comments all along
    But now you can.
    */

    return EXIT_SUCCESS;
}