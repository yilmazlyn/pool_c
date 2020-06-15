#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void print_tab(int **table){


  printf("-----------------\n" );
  printf("| %d | %d | %d | %d |\n",table [0][0], table [0][1], table [0][2], table [0][3]);
  printf("-----------------\n");
  printf("| %d | %d | %d | %d |\n", table [1][0], table [1][1], table [1][2], table [1][3]);
  printf("-----------------\n");
  printf("| %d | %d | %d | %d |\n",table [2][0], table [2][1], table [2][2], table [2][3]);
  printf("-----------------\n");
  printf("| %d | %d | %d | %d |\n", table[3][0], table [3][1], table [3][2], table [3][3]);
  printf("-----------------\n\n");

  return ;
}
/*
int main(void){

int i = 0;

int **table = malloc (4 * sizeof (int*));
  for (;i < 4; i++) {
      table[i] = malloc(4*sizeof (int));
      }



      table[0][0]=0;
                         table[0][1]=0;
                         table[0][2]=1;
                         table[0][3]=1;

                         table[1][0]=0;
                         table[1][1]=0;
                         table[1][2]=1;
                         table[1][3]=1;

                         table[2][0]=2;
                         table[2][1]=2;
                         table[2][2]=3;
                         table[2][3]=3;

                         table[3][0]=2;
                         table[3][1]=2;
                         table[3][2]=3;
                         table[3][3]=3;

                         algo_line(table, 0);
                         algo_column(table, 0);
                         algo_square(table, 0);


return 0;

}
*/
