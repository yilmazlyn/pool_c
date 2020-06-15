#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

int my_strlen(char * str1)
{//to take size of my string
  int i = 0;
  while (str1[i] != '\0')
  {
    i++;
  }
  return i;
}

void my_begin_end(char * input) {
  int index = 0;
  int my_size = my_strlen(input);//my_size variable = to my string lenght
  int jindex = my_size;

  while (input[index] != '\0')
  {//so that index can see all characters on the string
    write(1, &input[index], 1);//so that it prints out address of the input
    sleep(1);
    index++;
  }


  index = 0;
  write(1, "\r", 1);//so that cursor goes to the begining

  while (index != '\0',jindex <= my_size )
  {
    index++;
    write(1, " ", 1);
    sleep(1);


  }
  while (index != '\0'&& jindex <= my_size )
  {
    jindex--;
    write(1, " ", 1);
    sleep(1);
  }


  return ;

}






int main() {

  char * input;

  char * str = "Yilmaz";

  my_begin_end(str);

  return 0;
  }
