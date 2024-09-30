#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *next;
};

struct node *root=NULL;

void insert(int x)
{
    struct node *nuevo;
    nuevo = malloc(sizeof(struct node));
    nuevo->info = x;
    if(root ==NULL)
    {
        root = nuevo;
        nuevo->next = NULL;
    }
    else
    {
        nuevo->next = root;
        root = nuevo;
    }
}

int extract()
{
    if(root != NULL)
    {
        int information = root->info;
        struct node *del = root;
        root = root->next;
        free(del);
        return information;
    }
    else
    {
        return -1;
    }
}

void print()
{
    struct node *reco=root;
    printf("Full list.\n");
    while(reco != NULL)
    {
        printf("%i ",reco->info);
        reco = reco->next;
    }
    printf("\n");
}

void release()
{
    struct node *reco = root;
    struct node *del;
    while (reco != NULL)
    {
        del = reco;
        reco = reco->next;
        free(del);
    }
}

int quantity()
{
    struct node *reco=root;
    int cant=0;
    while(reco!=NULL)
    {
        cant++;
        reco=reco->next;
    }
    return cant;
}

int empty()
{
    if(root==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    if(empty()==1)
    {
        printf("The list is empty 1\n");
    }
    insert(10);
    if(empty()==1)
    {
        printf("The list is empty 2\n");
    }
    insert(4);
    insert(5);
    printf("Quantity of nodes: %i\n",quantity());
    print();
    printf("Extract from the stack: %i\n",extract());
    printf("Quantity of nodes: %i\n",quantity());
    print();
    printf("Extract all the nodes from the stack type list.\n");
    while(empty()==0)
    {
        printf("%i\n",extract());
    }
    printf("Quantity of nodes: %i\n",quantity());
    release();
    getch();
    return 0;
}

