#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

char * my_strcpy (char * dest, char * src)
{

  int i = 0;


while (src[i] != '\0')
  {
    dest[i] = src[i];
    ++i;

  }

dest[i] = src[i];

return dest;

}
/*
int main ()
{

char t1[]="Hello World";
char t2[]="This is gonna be awesome";

  printf("New text will be copied in %s\n", my_strcpy(t2,t1));

return 0;
}
*/
