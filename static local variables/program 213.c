#include<stdio.h>
#include<conio.h>
#include<time.h>

int verificarFin()
{
    static int intentos=3;
    intentos--;
    if(intentos==0)
    {
        printf("PERDIO, solo tenia 3 intentos. =(");
        return 1;
    }
    return 0;
}

int jugar()
{
    srand(time(NULL));
    int numero = rand() % 100 + 1;
    int valor;
    do{
        printf("Adivina el numero que pense entre 1 y 100: ");
        scanf("%i",&valor);
        if(valor==numero)
        {
            printf("GANASTE!");
            break;
        }
        else
            if(valor<numero)
            printf("El numero que pense ES MAYOR\n");
            else
                printf("El nuemero que pense ES MENOR\n");
    }while(verificarFin()==0);
}

int main()
{
    jugar();
    getch();
    return 0;
}
