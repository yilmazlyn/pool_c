#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>


 void my_show_str(char **tab) {

  int i = 0;


  while (tab[i] != NULL ){

    printf("%s\n", tab[i]);
    i++;
  }


}
/*
int main()
{

  char *tab[] = {
    "Hello",
    "Students",
    NULL
  };
  my_show_str(tab);
  return(0);
}
*/
