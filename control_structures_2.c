#include <stdio.h>

int main()
{
    int a = 10, b = 5, c = 2;

    switch (a)
    {
    case 5:
        break;
    case 10:
        printf("%d\n", a * c);
        break;
    case 15:
        printf("%d\n", b - c);
        break;
    default:
        printf("%d\n", b * c);
    }

    // The equivalent if-else statement
    // if (a == 5) {
    //     // Do nothing
    // } else if (a == 10) {
    //     printf("%d\n", a * c);
    //     printf("%d\n", b - c);
    // } else if (a == 15) {
    //     printf("%d\n", b - c);
    // } else {
    //     printf("%d\n", b * c);
    // }

    return 0;
}