#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *next;
};

struct node *root=NULL;

void insertFirst(int x)
{
    struct node *nuevo;
    nuevo=malloc(sizeof(struct node));
    nuevo->info=x;
    nuevo->next=root;
    root=nuevo;
}

void release()
{
    struct node *reco;
    struct node *del;
    while(reco!=NULL)
    {
        del=reco;
        reco=reco->next;
        free(del);
    }
}

void printNormal()
{
    struct node *reco=root;
    while(reco!=NULL)
    {
        printf("%i ",reco->info);
        reco=reco->next;
    }
    printf("\n");
}

void printReverse(struct node *reco)
{
    if(reco!=NULL)
    {
        printReverse(reco->next);
        printf("%i ",reco->info);
    }
}

int main()
{
    insertFirst(5);
    insertFirst(4);
    insertFirst(10);
    printNormal();
    printReverse(root);
    release();
    getch();
    return 0;
}
