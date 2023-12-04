#include <cs50.h>
#include <stdio.h>

int main(void)
{
     int h;
    do
    {
        h = get_int("Height:"); // Prompt user for height
    }
    while (h < 1 || h > 8);

    for (int p = 0; p < h; p++)
    {
        for (int i = 0; i < h - p - 1; i++)  // Formula fo where spaces should be
        {
            printf(" ");
        }

        for (int i = 0; i <= p; i++)  // Formula for where hashes should be
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
