#include<stdio.h>
#include<conio.h>

struct product {
    int code;
    char description[41];
    float price;
};

struct product load()
{
    struct product pro;
    printf("Enter the product code: ");
    scanf("%i",&pro.code);
    fflush(stdin);
    printf("Enter the product name: ");
    gets(pro.description);
    printf("Enter the product price: ");
    scanf("%f",&pro.price);
    return pro;
};

void print(struct product pro)
{
    printf("\nProduct dates\n");
    printf("Product code: %i\n",pro.code);
    printf("Product name: %s\n",pro.description);
    printf("Product price: %0.2f\n",pro.price);
}

int main()
{
    struct product pro1,pro2;
    pro1=load();
    pro2=load();
    print(pro1);
    print(pro2);
    getch();
    return 0;
}
