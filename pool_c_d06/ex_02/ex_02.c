#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

int *my_show_address (int num)
{


  printf("%p\n",&num);

  return 0;

}
/*
int main()
{
  int i ;
  my_show_address(i);

  return 0;
}
*/
