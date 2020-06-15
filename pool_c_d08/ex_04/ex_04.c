#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "struct.h"
#include "abs.h"

void my_init(t_my_struct *t, int a, const char * str1){

  t-> id = MY_ABS(a);
  t-> str = strdup(str1);



}

/*
int main (){


  int a = -4;
  const char * str1;
  t_my_struct t;

  t.id = -5;
  t.str = "Marion";


  my_init (&t, 1, "Yilmaz");

  printf("%d\n%s\n", t.id, t.str);

  return 0;

  }
*/
