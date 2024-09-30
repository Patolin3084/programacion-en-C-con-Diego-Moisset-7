#include<stdio.h>
#include<conio.h>

int factorial(int fact)
{
    if(fact>0)
    {
        int value=fact * factorial(fact - 1);
        return value;
    }
    else
        return 1;
}

int main()
{
    printf("The factorial of 4 is %i",factorial(4));
    getch();
    return 0;
}
