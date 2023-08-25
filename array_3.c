#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 2d arrays are just arrays of arrays
    // think of them like this -
    // [ [1, 2, 3],
    //   [4, 5, 6],
    //   [7, 8, 9] ]

    // how do we define a 2d array?
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // or int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    //  this is because the compiler can figure out the number of rows from the initialization given the number of columns

    // how do we print a 2d array?
    // we can use nested loops
    // the outer loop will iterate over the rows
    // the inner loop will iterate over the columns

    for (int i = 0; i < 3; i++) // i is the row index
    {
        for (int j = 0; j < 3; j++) // j is the column index
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    // lets walk through how this works on paper

    // now lets see how to print the matrix column wise
    // this is also called transpose of a matrix
    // we will use the same nested loops but the order of the loops will be reversed
    // the outer loop will iterate over the columns
    // the inner loop will iterate over the rows

    for (int j = 0; j < 3; j++) // j is the column index
    {
        for (int i = 0; i < 3; i++) // i is the row index
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    // the sum of the elements of the matrix is fairly similar
    // we just need to add the elements to a variable instead of printing them

    int sum = 0;
    for (int i = 0; i < 3; i++) // i is the row index
    {
        for (int j = 0; j < 3; j++) // j is the column index
        {
            sum += arr[i][j];
        }
    }
    printf("Sum of elements of arr : %d\n", sum);

    return EXIT_SUCCESS;
}