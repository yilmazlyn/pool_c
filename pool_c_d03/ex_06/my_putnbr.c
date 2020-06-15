#include <unistd.h>
void my_putchar(char c)
  {
    write(1, &c,  1);

  }


void my_putnbr(int n){
  int	i;

    i = 0;

    if (n <= 9 && n >= 0)
      my_putchar(n + '0');
    if (n < 0)
      {
        my_putchar('-');
        n = n * (- 1);
        if (n <= 9 && n >=0)
          my_putnbr(n);
      }
    if (n > 9)
      {
        i = n % 10;
        my_putnbr(n / 10);
        my_putchar(i + '0');
      }



      return;
}
/*
int main(){


my_putnbr(42);
my_putnbr(-42);
return (0);

}
*/
