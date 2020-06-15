
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

int my_strlen(char *s3)
{
  int i = 0;
 while (s3[i] != '\0'){
   i++;}
return i;
}


void my_revstr_write(char *input){

  int my_size =  my_strlen(input);

  int index;
  index = my_size;



  while( index >= 0 ) {

    write(1, &input[index], 1);
    sleep(2);
    index--;
    
  }
  write(1, "\n", 1);
  return ;
}
/*
int main (){

char *input;


  char *str = "YilmazPutun";




  my_revstr_write (str);

  return 0;
}
*/
