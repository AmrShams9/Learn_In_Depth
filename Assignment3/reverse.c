#include <stdio.h>

void reverseString(char *str)
{
    // Find the length of the string
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    // Swap characters to reverse the string
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main()
{
    char str[100];

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }

    // Reverse the string
    reverseString(str);

    // Display the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
