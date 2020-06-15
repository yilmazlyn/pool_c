#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

char *my_strdup (char *src){

  int len = 0;
  while (src[len] != '\0')
  {
    len++;
  }
int i = 0;

  char *dest = malloc(sizeof(char) * (len + 1));
  if (dest == NULL)
   return NULL;

  while (src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return dest;
}


/*
int main () {

int i;
  char *dest = my_strdup ( "Hello World !" );


  printf("%s\n", dest);


  return 0;


}
*/
