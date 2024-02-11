#include <stdio.h>

// Recursive function to reverse a string
void reverseSentence()
{
    char c;

    // Read a character
    scanf("%c", &c);

    // Base case: stop when a newline character is encountered
    if (c != '\n')
    {
        // Recursively call the function to reverse the rest of the sentence
        reverseSentence();

        // Print the character after the recursive call (post-order traversal)
        printf("%c", c);
    }
}

int main()
{
    printf("Enter a sentence: ");

    // Call the recursive function to reverse the sentence
    reverseSentence();

    printf("\n");

    return 0;
}
