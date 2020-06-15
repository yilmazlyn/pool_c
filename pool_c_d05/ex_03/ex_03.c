#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

int my_strcmp(char *str1, char *str2)
{

  char i=0;
  char j=0;
  i=*str1;
  j=*str2;
  while (str1[i] != '\0')
  {
    if (str2[j]=='\0') return 1;
    if (str2[j]>i) return -1;
    if (str1[i]>j) return 1;
    i++;
    j++;
  }
if (str2[j] !='\0') return -1;
return 0;

}

/*
int main ()
{
char str1[6] = "Hello";
char str2[7] = "Ponyy";

printf("%d\n", my_strcmp(str1, str2));
printf("%d\n", my_strcmp(str2, str1));
printf("%d\n", my_strcmp(str1, str1));
}
*/
