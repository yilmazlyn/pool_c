#include <stdio.h>

#include <string.h>

#include <stdlib.h>

void print_unique(int * array, int size) {

  int i, j;
  int counter;

  for (i = 0; i < size; i++)
  {

    counter = 0;

    for (j = 0; j < size; j++)
    {
      if (array[i] == array[j] && i != j) {

        counter++;
        break;
      }
    }

    if (counter == 0) {

      printf("%d", array[i]);
      if (i != size - 1) {
        printf(",");

      }

    }

  }
  printf("\n");
  return;
}
/*
int main() {
  int tab[] = {
    0,
    0,
    2,
    3,
    4,
    3,
    6,
    1
  };
  print_unique(tab, 8);
  return (0);
}
*/
