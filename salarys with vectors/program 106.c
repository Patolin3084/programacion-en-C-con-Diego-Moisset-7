#include<stdio.h>
#include<conio.h>

void load(float salary[4])
{
    for(int x=0;x<4;x++)
    {
        printf("Enter the employee's salary: ");
        scanf("%f",&salary[x]);
    }
}

float expensesShift(float salary[4])
{
    float add=0;
    for(int x=0;x<4;x++)
    {
        add=add+salary[x];
    }
    return add;
}

int main()
{
    float salaryMorn[4];
    float salaryAft[4];
    printf("Load the salaries morning shift\n");
    load(salaryMorn);
    printf("Load the salaries afternoon shift\n");
    load(salaryAft);
    printf("Expenses of morning shift: %0.2f\n",expensesShift(salaryMorn));
    printf("Expenses of afternoon shift: %0.2f\n",expensesShift(salaryAft));
    getch();
    return 0;
}
