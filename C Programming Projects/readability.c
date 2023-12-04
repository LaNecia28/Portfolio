#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// Function prototypes
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{    // Get text input from user
    string text = get_string("Text: ");

    // Count letters
    int letters = count_letters(text);

    // Count words
    int words = count_words(text);

    // Count Sentences
    int sentences = count_sentences(text);

    // Calculate Coleman-Liau index
    float L = (letters / (float)words) * 100;
    float S = (sentences / (float)words) * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    // Print grade level
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 13)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }
}

// Function to count letters
int count_letters(string text)
{
    int letters = 0;

    for (int l = 0; l < strlen(text); l++)
    {
        if (isalpha(text[l]))
        {
            letters++;
        }
    }

    return letters;
}

// Function to count words
int count_words(string text)
{
    int words = 1; // Initialize words to 1, assuming the text starts with a word

    int len = strlen(text);

    for (int w = 0; w < len; w++)
    {
        if (text[w] == ' ' && w != 0)
        {
            words++;
        }
    }
    return words;
}

// Function to count sentences in the text
int count_sentences(string text)
{
    int sentences = 0;

    for (int s = 0; s < strlen(text); s++)
    {
        if (text[s] == '.' || text[s]== '?' || text[s]== '!') // Checks if character is punctuation mark
        {
            sentences++;
        }
    }
    return sentences;
}
