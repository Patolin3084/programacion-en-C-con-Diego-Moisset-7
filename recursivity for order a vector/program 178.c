#include<stdio.h>
#include<conio.h>

#define CANTIDAD 5

void load(int vec[CANTIDAD])
{
    for(int r=0;r<CANTIDAD;r++)
    {
        printf("Enter element:");
        scanf("%i",&vec[r]);
    }
}

void print(int vec[CANTIDAD])
{
    for(int r=0;r<CANTIDAD;r++)
    {
        printf("%i ",vec[r]);
    }
    printf("\n");
}

void order(int vec[CANTIDAD],int cant)
{
    if(cant>1)
    {
        for(int r=0;r<cant-1;r++)
        {
            if(vec[r]>vec[r+1])
            {
                int aux=vec[r];
                vec[r]=vec[r+1];
                vec[r+1]=aux;
            }
        }
        order(vec,cant-1);
    }
}

int main()
{
    int vec[CANTIDAD];
    load(vec);
    print(vec);
    order(vec,CANTIDAD);
    print(vec);
    getch();
    return 0;
}
