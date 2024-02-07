#include <stdio.h>

int main()
{
    int arr[2][2];
    int arr1[2][2];
    int result[2][2];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Enter element of row %d: ", i + 1); 
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter elements of the Second matrix: \n");
    for (int i = 0; i < 2; i++)
    {
        printf("Enter element of row %d: ", i + 1);
        for (int j = 0; j < 2; j++)
            scanf("%d", &arr[i][j]);
    }

    // Adding the two matrices
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = arr[i][j] + arr1[i][j];
        }
    }

    // Displaying the result matrix
    printf("\nThe sum of the two matrices is:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
