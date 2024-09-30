#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char name1[31];
    char name2[31];
    printf("Enter the first name: ");
    gets(name1);
    printf("Enter the second name: ");
    gets(name2);
    if(strcmp(name1,name2)==0)
    {
        printf("The two names are exactly the same");
    }
    else
    {
        if(strcmp(name1,name2)>0)
        {
            printf("%s is bigger alphabetically",name1);
        }
        else
        {
            printf("%s is bigger alphabetically",name2);
        }
    }
    getch();
    return 0;
}
