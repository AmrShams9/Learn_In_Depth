#include <stdio.h>

int main()
{
    int n;

    // Get the number of elements from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Input elements from the user
   
    for (int i = 0; i < n; i++)
    {
        printf("Enter element number %d:\n", i+1);
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of elements
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    // Calculate the average
    float average = (float)sum / n;

    // Display the result
    printf("The average is: %.2f\n", average);

    return 0;
}
