#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char name1[31];
    char name2[31];
    char nameLong[31];
    printf("Enter the first name: ");
    gets(name1);
    printf("Enter the second name: ");
    gets(name2);
    if(strlen(name1)>strlen(name2))
    {
        strcpy(nameLong,name1);
    }
    else
    {
        strcpy(nameLong,name2);
    }
    printf("The word with the most characters is %s",nameLong);
    getch();
    return 0;
}
