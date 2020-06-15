#include "rubiks.h"
#define PRINT_SQUARE_DEBUG_ 0



/* lines for push lines to left*/
void algo_line(int **table, int line){

  int tmp;
  int i;
  i = 0;

if(PRINT_SQUARE_DEBUG_ == 1){
  printf("Rotate Left line %.\n", line);}

tmp = table[i][0];
table[i][0] = table[i][1];
table[i][1] = table[i][2];
table[i][2] = table[i][3];
table[i][3] = tmp;



print_tab(table);

}

 void algo_column(int **table, int column){
   int c_tmp;
   int c;
   c = 0;

if(PRINT_SQUARE_DEBUG_ == 1){
  printf("Rotate Top column %d.\n", column);}

    c_tmp = table[0][c];
   table[0][c] = table[1][c];
   table[1][c]= table[2][c];
   table[2][c] = table[3][c];
   table[3][c]= c_tmp;

   print_tab(table);

}

 void algo_square(int **table, int square){

   int s_tmp;


   if(PRINT_SQUARE_DEBUG_ == 1){
      printf("Rotate Clockwise square %d.\n", square);}

   if (square == 0) {

  s_tmp = table[1][0];
  table[1][0]= table[1][1];
  table[1][1] = table[0][1];
  table[0][1] = table[0][0];
  table[0][0] = s_tmp;

  }

  else if (square == 1) {

  s_tmp = table[1][3];
  table[1][3] = table[0][3];
  table[0][3] = table[0][2];
  table[0][2] = table[1][2];
  table[1][2] = s_tmp;

  }

else if (square == 2 ) {

      s_tmp = table[2][0];
      table[2][0]=table[3][0];
      table[3][0]=table[3][1];
      table[3][1]=table[2][1];
      table[2][1]=s_tmp;

    }

else if (square == 3) {
        s_tmp = table[2][2];
      table[2][2] = table[3][2];
      table[3][2] = table[3][3];
      table[3][3] = table[2][3];
      table[2][3] = s_tmp;
    }

    print_tab(table);


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
