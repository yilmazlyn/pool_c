#include<stdio.h>


void my_swap(int *a, int *b)
{
int temp;
  temp = *a;
  *a = *b;
  *b = temp;




}


/*
int main()
{
int nb1 = 42;
int nb2 = 21;
printf("%d - %d\n", nb1, nb2);
my_swap(&nb1, &nb2);
printf("%d - %d\n", nb1, nb2);
return (0);
}
*/
