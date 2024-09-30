#include<stdio.h>
#include<conio.h>

int main()
{
    char word[20];
    printf("Enter a word: ");
    gets(word);
    if(word[0]=='a')
        printf("The word begins with the letter 'a'");
    else
    {
        if(word[0]=='A')
            printf("The word begins with the letter 'A'");
        else
            printf("The word does not begin with the letter 'a' or 'A'");
    }
    getch();
    return 0;
}
