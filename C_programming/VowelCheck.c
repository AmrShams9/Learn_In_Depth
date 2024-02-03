#include <stdio.h>

int main() {
    char character;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf(" %c", &character);

    // Check if the character is a vowel or a consonant
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        switch (character) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                printf("%c is a vowel.\n", character);
                break;
            default:
                printf("%c is a consonant.\n", character);
        }
    } else {
        printf("Invalid input. Please enter a valid alphabet character.\n");
    }

    return 0;
}
