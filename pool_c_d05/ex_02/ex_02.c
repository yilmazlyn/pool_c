#include <unistd.h>
#include <stdio.h>
#include <stddef.h>


//to count lenght of input
int my_strlen(char *s3)
{
  int i = 0;
 while (s3[i] != '\0')
   i++;
return i;
}

//to swap carateres
void my_swap_char(char *a, char *b)
{
  char i;
    i = *a;
    *a = *b;
    *b = i;
}
//to reverse
char *my_revstr(char *str)
{

  int length=my_strlen(str);
  int i=length-1,j;
  for (j=0; j<length/2;j++){
    my_swap_char(&str[j], &str[i]);
    i--;
  }
  return str;
}
/*
int main()
{
char str[6] = "Hello";
printf("%s\n", my_revstr(str));
}
*/
