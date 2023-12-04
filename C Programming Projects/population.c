#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int s;
    do
    {
        s = get_int("Start Size:"); // Prompt user for start size of population
    }
    while (s < 9);
    int e;
    do
    {
        e= get_int("End Size:"); // Prompt user for the end size of population
    }
    while (e < s);

    int years = 0;

    while (e > s)
    {
        s = s + (s / 3) - (s / 4); // Simulates population growth using the formula
        years++;
    }
    printf("Years: %i\n", years); // Print the number of years needed for growth

}
