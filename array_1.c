#include <stdio.h>

void process_array(int a[])
{
    // Once passed to a function,
    // the array identifier is treated as a pointer.
    printf("In process_array...\n");
    printf("  sizeof(a) = %ld\n", sizeof(a));
}

int main()
{
    int a[10] = {245, 346, 2, 6, 245, 64, 34, 7};
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // how to get the number of elements in an array?

    // what will be the size of arr if we don't initialize it or initializ it with less values than the number of
    // spaces reserved?

    // what happens when we pass the array to a function? HINT - this is one of the MAJOR focuses of this course
    // here we also see what functions do - perform some task multiple times

    /*

    printf("\n\nIn main()...\n");
    printf("  sizeof(a) = %ld\n", sizeof(a));

    // Since `a` is defined in this scope, the size will reflect
    // the number of bytes allocated to that array.
    // This can be used to determine the number of elements.
    int numel = sizeof(a) / sizeof(a[0]);

    printf("  number of elements: %d\n", numel);

    process_array(a);
    */

    return 0;
}