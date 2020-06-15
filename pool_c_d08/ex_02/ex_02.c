#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "struct.h"


void my_init(t_my_struct *t){
  t-> id = 0;
  t-> str = NULL;
}

/*
int main (){

t_my_struct t;

my_init (&t);

printf("%d\n%s\n", t.id, t.str);

return 0;

}
*/
