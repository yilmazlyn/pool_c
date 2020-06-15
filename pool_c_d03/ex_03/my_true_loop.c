#include <unistd.h>
	void my_true_loop (unsigned int n)
{
	 int i;

	for (i = 1; i <= n; i++)
		write (1,"+",1);
	write (1,"\n",1);

}

int main()
{
my_true_loop(5);
return (0);
}
