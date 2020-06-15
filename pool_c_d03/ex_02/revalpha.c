#include <unistd.h>
void revalpha()
{
	char c;
    	for (c = 'Z'; c >= 'A'; --c)
        	write (1, &c ,1);

	write (1, "\n" ,1);
	return ;
}

/*
int main()
{
revalpha();
return (0);
}
-*/
