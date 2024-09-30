#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, suma, resta, mult, div;
    printf("ingrese el primer valor:");
    scanf("%i", &num1);
    printf("ingrese el segundo valor:");
    scanf("%i", &num2);
    if (num1>num2)
    {
        suma=num1+num2;
        resta=num1-num2;
        printf("El resultado de la suma es:");
        printf("%i", suma);
        printf("\n");
        printf("El resultado de la resta es:");
        printf("%i", resta);
    }
    else
    {
        mult=num1*num2;
        div=num1/num2;
        printf("El resultado de la multiplicación es:");
        printf("%i", mult);
        printf("\n");
        printf("El resultado de la división es:");
        printf("%i", div);
    }
    getch();
    return 0;
}
