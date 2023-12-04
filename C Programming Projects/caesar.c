#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Check for the correct number of command-line arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Ensure that the key is a non-negative integer
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert the command-line argument to an integer
    int k = atoi(argv[1]);

    // Prompt the user for input
    string plaintext = get_string("plaintext: ");

    // Encrypt and print the ciphertext
    printf("ciphertext: ");

    for (int j = 0; j < strlen(plaintext); j++)
    {
        if (isupper(plaintext[j]))
        {
            // Encrypt uppercase letters
            printf("%c", (plaintext[j] - 'A' + k) % 26 + 'A');
        }
        else if (islower(plaintext[j]))
        {
            // Encrypt lowercase letters
            printf("%c", (plaintext[j] - 'a' + k) % 26 + 'a');
        }
        else
        {
            // Print non-alphabetic characters unchanged
            printf("%c", plaintext[j]);
        }
    }

    printf("\n");

    return 0;
}
