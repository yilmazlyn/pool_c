#include <unistd.h>
int my_aff_comb()
{
	char a;
	char b;
	char c;
	for  (a ='0'; a <= '7'; a++)
	{
			for (b=a + 1  ; b <= '8'; b++)
			{
					for (c=b + 1; c <= '9'; c++)
				{
						write(1, &a, 1);
						write(1, &b, 1);
						write (1,&c,1);

  if (a=='7' && b=='8' && c=='9') {write (1,"",0);}
	else { 	write (1, ", " ,2);
          }


			}
		}
	}
}

int main()
{
my_aff_comb();
return (0);
}
