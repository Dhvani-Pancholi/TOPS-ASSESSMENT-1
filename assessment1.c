// Matrix multiplication using 2d array

#include <stdio.h>
// Function declarations
void inputmatrix();
void multimatrix();
void outputmatrix();

// Global variables to store matrix
int matrix1[2][2];
int matrix2[2][2];
int result_matrix[2][2];
int main()
{
    printf("\tMatrix Multiplication\n");
    // Calling function for input matrix
    inputmatrix();
    printf("\n");
    // Calling function for multiply matrix
    multimatrix();
    // Calling function for result matrix
    outputmatrix();
    return 0;
}
// function for input element into two matrix
void inputmatrix()
{

    printf("\n-------Matrix: 1------\n");
    // Input for first matrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter Element : ");
            scanf("%d", &matrix1[i][j]);
        }
    }
    // Display the first matrix
    printf("\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            printf("%d\t", matrix1[i][j]);
            if (j == 1)
            {
                printf("\n");
            }
        }
    }

    printf("\n------Matrix: 2------\n");
    // Input for second matrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter Element : ");
            scanf("%d", &matrix2[i][j]);
        }
    }
    // Display the second matrix
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            printf("%d\t", matrix2[i][j]);
            if (j == 1)
            {
                printf("\n");
            }
        }
    }
}
// function for multiply two matrix
void multimatrix()
{
    // Perform matrix multiplication
    result_matrix[0][0] = (matrix1[0][0] * matrix2[0][0]) + (matrix1[0][1] * matrix2[1][0]);
    result_matrix[0][1] = (matrix1[0][0] * matrix2[0][1]) + (matrix1[0][1] * matrix2[1][1]);
    result_matrix[1][0] = (matrix1[1][0] * matrix2[0][0]) + (matrix1[1][1] * matrix2[1][0]);
    result_matrix[1][1] = (matrix1[1][0] * matrix2[0][1]) + (matrix1[1][1] * matrix2[1][1]);
}

// function for result matrix
void outputmatrix()
{
    printf("\n");
    printf("\n-----Result : Multiplication Matrix-----\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            printf("%d\t", result_matrix[i][j]);
            if (j == 1)
            {
                printf("\n");
            }
        }
    }
}