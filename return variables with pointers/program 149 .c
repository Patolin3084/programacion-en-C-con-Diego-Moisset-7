 #include<stdio.h>
 #include<conio.h>
 #define TAMANO 5

 void load(int vec[TAMANO])
 {
     for(int r=0;r<TAMANO;r++)
     {
         printf("Enter the element: ");
         scanf("%i",&vec[r]);
     }
 }

 void mayorMenor(int vec[TAMANO],int *pmayor,int *pmenor)
 {
     *pmayor=vec[0];
     *pmenor=vec[0];
     for(int r=1;r<TAMANO;r++)
     {
         if(vec[r]>*pmayor)
         {
             *pmayor=vec[r];
         }
         else
         {
             if(vec[r]<*pmenor)
             {
                 *pmenor=vec[r];
             }
         }
     }
 }

 int main()
 {
     int vec[TAMANO];
     load(vec);
     int ma,me;
     mayorMenor(vec,&ma,&me);
     printf("Mayor elemento del vector: %i\n",ma);
     printf("Menor elemento del vector: %i",me);
     getch();
     return 0;
 }
