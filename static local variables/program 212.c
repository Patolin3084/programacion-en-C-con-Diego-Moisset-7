#include<stdio.h>
#include<conio.h>

void print()
{
    static int x;
    x++;
    printf("%i ",x);
}

int main()
{
    print();
    print();
    print();
    getch();
    return 0;
}
