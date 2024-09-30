#include<stdio.h>
#include<conio.h>

int main()
{
    int f,salarys[5];
    //carga del vector
    for(f=0;f<5;f++)
    {
        printf("Enter salary value: ");
        scanf("%i",&salarys[f]);
    }
    printf("List of salarys \n");
    //impresion del vector
    for(f=0;f<5;f++)
    {
        printf("%i",salarys[f]);
        printf("\n");
    }
    getch();
    return 0;
}
