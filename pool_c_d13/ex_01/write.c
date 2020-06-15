#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void my_sleep_function(char *input){


int index;
index = 0;


  while( input[index] != '\0') {
    write(1, &input[index],1);
    sleep(1);
    index++;

  }
  write(1, "\n", 1);
  return ;
}

int main (){

char *input;


  char *str = "Follow the white rabbit!";




  my_sleep_function (str);

  return 0;
}
