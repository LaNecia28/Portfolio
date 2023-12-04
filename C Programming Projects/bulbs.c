#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // Get message from user
    string message = get_string("Message: ");

    for (int i = 0, n = strlen(message); i < n; i++)
    {
        // Convert each char to binary and print each bit as a bulb
        char c = message[i];
        for (int b = BITS_IN_BYTE - 1; b >= 0; b--)
        {
            int bit = (c >> b) & 1;

            // Print the lightbulb emoji for the bit
            print_bulb(bit);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}

