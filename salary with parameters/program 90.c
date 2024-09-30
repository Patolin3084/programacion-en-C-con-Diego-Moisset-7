#include<stdio.h>
#include<conio.h>

void calculateSalary(float cost,int amount)
{
    float salary=cost*amount;
    printf("The total salary to pay is %0.2f\n",salary);
}

int main()
{
    float hourlyCost;
    int amountHours;
    char option;
    do{
        printf("How much do you get paid per hour?");
        scanf("%f",&hourlyCost);
        printf("How many hours did you work?");
        scanf("%i",&amountHours);
        calculateSalary(hourlyCost,amountHours);
        printf("Do you want to calculate another salary? [y/n]: ");
        scanf(" %c",&option);
    }while(option=='y');
    getch();
    return 0;
}
