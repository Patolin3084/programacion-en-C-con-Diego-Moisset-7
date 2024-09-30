#include<stdio.h>
#include<conio.h>

int main()
{
    int value,add=0;
    char continua;
    do{
        printf("Enter a integer value to add: ");
        scanf("%i",&value);
        printf("Do you want to enter a new value[y/n]: ");
        scanf(" %c",&continua);
        add=add+value;
    }while(continua=='y' || continua=='Y');
    printf("The result of the add is: %i",add);
    getch();
    return 0;
}
