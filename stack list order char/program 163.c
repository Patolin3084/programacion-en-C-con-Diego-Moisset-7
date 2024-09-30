#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
    char simbol;
    struct node *next;
};

//variable global que apunta al primer nodo de la lista
struct node *root=NULL;

void insert(char x)
{
    struct node *nuevo;
    nuevo = malloc(sizeof(struct node));
    nuevo->simbol = x;
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
        char information = root->simbol;
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

void load(char *formula)
{
    printf("Enter the formula: ");
    gets(formula);
}

int verificationBalance(char *formula)
{
    for(int r=0;r<strlen(formula);r++)
    {
        if(formula[r]=='(' || formula[r]=='[' || formula[r]=='{')
           {
               insert(formula[r]);
           }
           else
           {
               if(formula[r]==')')
               {
                   if(extract()!='(')
                   {
                       return 0;
                   }
               }
               else
               {
                   if(formula[r]==']')
                   {
                       if(extract()!='[')
                       {
                           return 0;
                       }
                   }
                   else
                   {
                       if(formula[r]=='}')
                       {
                           if(extract()!='{')
                            {
                                return 0;
                            }
                       }
                   }
               }
           }
    }
    if(empty())
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
    char formula[101];
    load(formula);
    if(verificationBalance(formula))
    {
        printf("The formula is balanced");
    }
    else
    {
        printf("The formula is not balanced");
    }
    release();
    getch();
    return 0;
}
