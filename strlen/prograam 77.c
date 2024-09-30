#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char word[31];
    printf("Enter a word: ");
    gets(word);
    int cant=strlen(word);
    printf("The word '%s' has %i letters",word,cant);
    getch();
    return 0;
}
