#include <stdio.h>
#include <stdlib.h>
// Write a program in C to print all the alphabets using a pointer. Go to the editor

int main()
{
    char *ptr; // Declare a pointer of type character
    ptr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // Assigning string value to the pointer
    
    printf("Alphabetical order using Pointer:\n"); 
    while (*ptr != '\0') // Loop until null character is encountered
    {
        printf("%c ", *ptr); // Print the ASCII value of the current character pointed by the pointer
        ptr++; // Increment the pointer to point to the next character in the string
    }
   return 0;
}



   

    