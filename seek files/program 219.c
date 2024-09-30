#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    FILE *arch;
    arch=fopen("archivo1.dat","rb");
    if (arch==NULL)
        exit(1);
    char c;
    fread(&c,sizeof(char),1,arch);
    printf("caracter:%c\n",c);
    fseek(arch,4,SEEK_CUR);
    float v2;
    fread(&v2,sizeof(float),1,arch);
    printf("float:%0.2f",v2);
    fclose(arch);
    getch();
    return 0;
}
