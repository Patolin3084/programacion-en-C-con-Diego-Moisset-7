#include<stdio.h>
#include<conio.h>

void load(int matrix[2][5])
{
    for(int r=0;r<2;r++)
    {
        for(int c=0;c<5;c++)
        {
            printf("Enter the element of the row %i an the column %i: ",r,c);
            scanf("%i",&matrix[r][c]);
        }
    }
}

void print(int matrix[2][5])
{
     for(int r=0;r<2;r++)
    {
        for(int c=0;c<5;c++)
        {
            printf("%i ",matrix[r][c]);
        }
        printf("\n");
    }
}

void exchange(int matrix[2][5])
{
    int aux;
    for(int c=0;c<5;c++)
    {
        aux=matrix[0][c];
        matrix[0][c]=matrix[1][c];
        matrix[1][c]=aux;
    }
}

void main()
{
    int matrix[2][5];
    load(matrix);
    printf("The original matrix is \n");
    print(matrix);
    exchange(matrix);
    printf("The matrix with the changes of rows is \n");
    print(matrix);
    getch();
    return 0;
}
