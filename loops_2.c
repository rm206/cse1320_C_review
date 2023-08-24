#include <stdio.h>

int main()
{
    int a = 9, b = 4, c = 2;

    while (a < 15)
    {
        printf("%d ", a);
        a++;

        // what happens if we don't increment "a"?
    }
    printf("a b c : %d%d%d\n", a, b, c);

    a = 10;
    b = 4;
    c = 2;

    do
    {
        a++;
    } while (a < 14 && b > 0);

    // difference between while and do-while?

    return 0;
}