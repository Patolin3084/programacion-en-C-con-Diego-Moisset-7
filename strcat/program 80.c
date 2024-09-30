#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char name[30],lastName[30],allName[60];
    printf("Enter the name: ");
    gets(name);
    printf("Enter the last name: ");
    gets(lastName);
    strcpy(allName,name);
    strcat(allName," ");
    strcat(allName,lastName);
    printf("%s",allName);
    getch();
    return 0;
}
