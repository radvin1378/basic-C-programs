//Vowel or consonant

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char x;
    int lower_vowels, upper_vowels;
    printf("Enter an alphabet: ");
    scanf("%c", &x);

    lower_vowels = (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u');
    upper_vowels = (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U');

    if (isalpha(x))
    {
        if (upper_vowels || lower_vowels)
            printf("Vowel\n");
        else
            printf("Consonat\n");
    }
    else
        printf("Not alphabet\n");
    return 0;
}