
#include <stdio.h>
#define MAX 10

int main()
{
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int r1, c1, r2, c2;
    int i, j, k;

    // Input dimensions of Matrix A
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    // Input dimensions of Matrix B
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Validate matrix dimensions
    if (r1 < 1 || c1 < 1 || r2 < 1 || c2 < 1 ||
        r1 > MAX || c1 > MAX || r2 > MAX || c2 > MAX)
    {
        printf("Size must be between 1 and %d.\n", MAX);
        return 0;
    }

    // Check multiplication condition
    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    // Read elements of Matrix A
    printf("\nEnter elements of Matrix A:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Read elements of Matrix B
    printf("\nEnter elements of Matrix B:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Multiply matrices A and B
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            C[i][j] = 0;

            for (k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display resultant matrix
    printf("\nResultant Matrix C:\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%6d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
