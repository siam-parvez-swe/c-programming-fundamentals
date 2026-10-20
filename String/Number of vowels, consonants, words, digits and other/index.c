#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], ch;
    int i, vowel, consonant, digit, word, other;
    printf("Enter a string \n");
    fgets(str, sizeof(str), stdin);

    i = vowel = consonant = digit = word = other = 0;

    while ((ch = str[i]) != '\0')
    {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        
            vowel++;
        
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        
            consonant++;
        
        else if (ch >= '0' && ch <= '9')
        
            digit++;
        

        else if (ch == ' ')
        
            word++;
        
        else
        
            other++;
        

        i++;
    }
    word++;
    printf("Vowel = %d\n", vowel);
    printf("Consonant = %d\n", consonant);
    printf("Digit = %d\n", digit);
    printf("Word = %d\n", word);
    printf("Others = %d", other);

    return 0;
}