#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

int my_strlen(char * s3) {
  int i = 0;
  while (s3[i] != '\0') {
    i++;
  }
  return i;
}

void my_erase_delete(char * input) {
  int index = 0;

  while (input[index] != '\0') {
    write(1, & input[index], 1);
    sleep(1);
    index++;
  }

  int my_size = my_strlen(input);

  index = 0;
  write(1, "\r", 1);
  while (index != my_size) {
    write(1, " ", 1);
    sleep(1);
    index++;
  }

  write(1, "\n", 1);
  return;
}

int main() {

  char * input;

  char * str = "follow the white rabbit! ";

  my_erase_delete(str);

  return 0;
}
