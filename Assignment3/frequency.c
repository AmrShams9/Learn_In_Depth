#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256

int main()
{
    char str[100];

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Declare an array to store the frequency of each character
    int frequency[ASCII_SIZE] = {0};

    // Calculate the frequency of each character in the string
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != '\n')
        { // Exclude newline character from counting
            frequency[(int)str[i]]++;
        }
    }

    // Find the character with the highest frequency
    char maxChar;
    int maxFrequency = 0;

    for (int i = 0; i < ASCII_SIZE; i++)
    {
        if (frequency[i] > maxFrequency)
        {
            maxFrequency = frequency[i];
            maxChar = (char)i;
        }
    }

    // Display the result
    printf("The character with the highest frequency is '%c' with frequency %d\n", maxChar, maxFrequency);

    return 0;
}
