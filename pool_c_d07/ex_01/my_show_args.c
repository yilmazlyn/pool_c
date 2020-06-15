#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>


int main (int argc, char *argv []){

  int i = 1;
if (argc == 1){
  printf("\n");
}


  for(i = 1; i < argc; i++){


  printf("%s\n", argv[i]);

  }


  return 0;

}
