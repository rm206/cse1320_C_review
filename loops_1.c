#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d ", j);
        }
        // printf("\n");
    }

    return 0;
}