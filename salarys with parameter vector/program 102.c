#include<stdio.h>
#include<conio.h>

void loadSalary(float salary[6])
{
    for(int x=0;x<6;x++)
    {
        printf("Enter the employees salary: ");
        scanf("%f",&salary[x]);
    }
}

void printSalary(float salary[6])
{
    printf("The salaries are: \n");
    for(int x=0;x<6;x++)
    {
        printf("%0.2f\n",salary[x]);
    }
}

void addSalary(float salary[6])
{
    float add=0;
    printf("Total expenditure on salaries: ");
    for(int x=0;x<6;x++)
    {
        add=add+salary[x];
    }
    printf("%0.2f",add);
}

float main()
{
    float sal[6];
    loadSalary(sal);
    printSalary(sal);
    addSalary(sal);
    getch();
    return 0;
}
