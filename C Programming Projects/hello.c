#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt user to input their name

    string answer = get_string("What's your name? ");

    //Use user input to say hello

    printf("Hello, %s!\n", answer);
}