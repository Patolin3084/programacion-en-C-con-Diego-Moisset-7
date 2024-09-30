#include<stdio.h>
#include<conio.h>

void showGender(char type)
{
    if(type=='m')
    {
        printf("Male\n");
    }
    if(type=='f')
    {
        printf("Female");
    }
}

int main()
{
    showGender('m');
    showGender('f');
    getch();
    return 0;
}
