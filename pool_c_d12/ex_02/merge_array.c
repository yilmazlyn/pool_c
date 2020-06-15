#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <stddef.h>

int * merge_array(int * arr1, int * arr2, int size1, int size2) {
  //malloc for new table so that it can include s1 and s2

  int * arr3;
  int size3;
  int i, j, k;
  i = 0;
  j = 0;
  k = 0;
  size3 = size1 + size2;

  arr3 = malloc((size1 + size2) * sizeof(int));

  //trace of my two arrays first of all
  while (i < size1 && j < size2) {
    if (arr1[i] < arr2[j]) {
      arr3[k] = arr1[i];
      i++; k++;

    } else {
      arr3[k] = arr2[j];
      j++; k++;

    }



  }
  while (i < size1){
    arr3[k] = arr1[i];
    k++;
    i++;
  }


  while (j < size2){
    arr3[k] = arr2[j];
    k++;
    j++;
  }

  return arr3;
}
/*
int main() {
  int * tab3;

  int tab1[] = {1, 2, 3, 4, 5, 6};

  int tab2[] = {7, 8, 9, 10, 11, 12, 13, 14};
  tab3 = merge_array (tab1, tab2, 6, 8);
  for (int i = 0; i < tab3; i++)
           {printf("%d", i++);
         }
  return 0;
}
*/
