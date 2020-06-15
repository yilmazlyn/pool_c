#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char * argv[]) {


  int i, n;

  if (argc < 2 || (n = atoi(argv[1])) < 1 ) {
    printf("Error.\n", argv[0]);
  }
  else
    for (i = 0; i < n; i++)
    printf("Hello\n");

 return 0;


}
