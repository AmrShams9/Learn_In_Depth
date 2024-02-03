#include <stdio.h>

int main()
{
    long num1, num2, num3;

    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");
    scanf("%ld %ld %ld", &num1, &num2, &num3);

    // Compare the numbers to find the largest
    if (num1 >= num2 && num1 >= num3)
    {
        printf("%ld is the largest number.\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("%ld is the largest number.\n", num2);
    }
    else
    {
        printf("%ld is the largest number.\n", num3);
    }

    return 0;
}
