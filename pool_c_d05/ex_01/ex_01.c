#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

int array_sum(int *tab, int size)
{

int i,sum=0;


  for (i=0; i < size; i++)
  {
    sum += tab[i];
  }
return sum;
}


/*
int main ()
{
int tab[3] = {3, 4, 5};
printf("%d\n", array_sum(tab, 3));
return (0);
}
*/
