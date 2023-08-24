#include <stdio.h>
#include <stdlib.h>

void repeat_this(int n)
{
    printf("%d\n", n * 2 + 1 % 4);
}

int main()
{
    // say we need to perform a sequence of operations on 1, 2, 3
    printf("%d\n", 1 * 2 + 1 % 4);
    printf("%d\n", 2 * 2 + 1 % 4);
    printf("%d\n", 3 * 2 + 1 % 4);

    // that is repetitive, so we can let the function handle it
    repeat_this(1);
    repeat_this(2);
    repeat_this(3);

    // even better, we can use a loop and let the function handle the rest
    for (int i = 1; i <= 3; i++)
    {
        repeat_this(i);
    }

    // what if we don't know when to stop printing?
    // loops again!
    // say we stop printing when the number becomes 15
    int n = 1;
    while (n <= 15)
    {
        repeat_this(n);
        n++;
    }

    return EXIT_SUCCESS;
}