#include <stdio.h>
#include <stdlib.h>

void tri_bulle_optimise(int tab[],int longueur)
     {
     int i, inversion;
     j=i+1
     do
       {
       inversion=0;

       for(i=0;i<longueur-2;i++)
          {
          if (tab[i]>tab[i+1])
             {
             echanger(tab,i,i+1);
             inversion=1;
             }
          }
       longueur--;
       }
     while(inversion);
     }



/*
 int main()
{

    int tab[10] = {3, 5, 7, 3, 24, 12, 25, 10, 56, 2};
    my_sort_int_tab(tab,10);


return 0;
}
*/
