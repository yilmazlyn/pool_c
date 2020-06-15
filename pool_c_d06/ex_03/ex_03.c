#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

int * my_up (int nb)
{
    int * a = (int*) malloc( 2*sizeof (int) );

    a[0] = nb;
    a[1] = nb*2;

    return a;
}
/*
int main ()
{
int *i = my_up(5);

printf("%d,%d\n", i[0], i[1]);

return 0;

}
*/
