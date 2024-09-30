#include<stdio.h>
#include<conio.h>
#include<string.h>

#define EMPLOYEESQUANTITY 4
#define MONTHS 3

void load(char employee[EMPLOYEESQUANTITY][40],float salary[EMPLOYEESQUANTITY][MONTHS])
{
    for(int r=0;r<EMPLOYEESQUANTITY;r++)
    {
        printf("Enter the employee name: ");
        gets(employee[r]);
        for(int c=0;c<MONTHS;c++)
        {
            printf("Enter a salary: ");
            scanf("%f",&salary[r][c]);
            fflush(stdin);
        }
    }
}

void addSalary(float salary[EMPLOYEESQUANTITY][MONTHS],float salaryTot[EMPLOYEESQUANTITY])
{
    for(int r=0;r<EMPLOYEESQUANTITY;r++)
    {
        int add=0;
        for(int c=0;c<MONTHS;c++)
        {
            add=add+salary[r][c];
        }
        salaryTot[r]=add;
    }
}

void print(char employee[EMPLOYEESQUANTITY][40],float salaryTot[EMPLOYEESQUANTITY])
{
    printf("\nAccumulated total for the last 3 months\n");
    for(int r=0;r<EMPLOYEESQUANTITY;r++)
    {
        printf("%s - %0.2f\n",employee[r],salaryTot[r]);
    }
}

void higherSalary(char employee[EMPLOYEESQUANTITY][40],float salaryTot[EMPLOYEESQUANTITY])
{
    float higher=salaryTot[0];
    char name[40];
    strcpy(name,employee[0]);
    for(int r=1;r<EMPLOYEESQUANTITY;r++)
    {
        if(salaryTot[r]>higher)
        {
            higher=salaryTot[r];
            strcpy(name,employee[r]);
        }
    }
    printf("\nThe employee with the highest salary is %s, who has an accumulated salary of %0.2f",name,higher);
}

void main()
{
    char employee[EMPLOYEESQUANTITY][40];
    float salary[EMPLOYEESQUANTITY][MONTHS];
    float salaryTot[EMPLOYEESQUANTITY];
    load(employee,salary);
    addSalary(salary,salaryTot);
    print(employee,salaryTot);
    higherSalary(employee,salaryTot);
    getch();
    return 0;
}
