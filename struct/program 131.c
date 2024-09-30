#include<stdio.h>
#include<conio.h>

struct product {
    int code;
    char description[41];
    float price;
};

int main()
{
    struct product pro1,pro2;

    printf("Enter the product code: ");
    scanf("%i",&pro1.code);
    fflush(stdin);
    printf("Enter the description: ");
    gets(pro1.description);
    printf("Enter the price: ");
    scanf("%f",&pro1.price);

    printf("Enter the product code: ");
    scanf("%i",&pro2.code);
    fflush(stdin);
    printf("Enter the description: ");
    gets(pro2.description);
    printf("Enter the price: ");
    scanf("%f",&pro2.price);

    if(pro1.price>pro2.price)
    {
        printf("The product '%s' has a higher price",pro1.description);
    }
    else
    {
        if(pro1.price<pro2.price)
        {
            printf("The product '%s' has a higher price",pro2.description);
        }
        else
        {
            printf("They have the same price.");
        }
    }
    getch();
    return 0;
}
