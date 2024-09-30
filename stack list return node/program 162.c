#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *next;
};

//variable global que apunta al primer nodo de la lista
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

int returnNode()
{
    if(root!=NULL)
    {
        return root->info;
    }
    else
    {
        return -1;
    }
}

int main()
{
    insert(10);
    insert(4);
    insert(5);
    print();
    printf("First element from the stack type list: %i\n",returnNode());
    print();
    printf("Extract from the stack: %i\n",extract());
    print();
    release();
    getch();
    return 0;
}
