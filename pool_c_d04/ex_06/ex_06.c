#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

int taille;
void my_swap (int* a, int* b)
{
    int c=*a;
    *a=*b;
    *b=c;



}

void my_putstr(char * str)
{
    int i=0;
    if (str==NULL) return ;
    while (str[i]!='\0') {
        write(1, str+i, 1);
        i++;
    }

}

void my_show_array (char **tab, int size)

{
int t, sum,i,j,val [3][size];
taille=size;
	//val[0] contient les tailles et val [1] contient les sommes val [2] contient les indices
	for (i=0;i<size;i++)
	{
		j=0; //initialisation de j pour chaque i
		sum=0;
		t=0;
		val[2][i]=i;
		while(tab[i][j]!='\0'){
			t++;
			sum+=tab[i][j];
			j++;
		}// fin while
		val[0][i]=t;
		val[1][i]=sum;

	}// fin for

	//Il faut faire le tri des tailles
	//my_sort_int_tab (&val[size],size);// on a les tailles triées
	/*Fonction de tri des tailles
	 *
	 */

	 int k,buf=0;


    for (i=0;i<size;i++)
    {
        buf=i;
        for(j=i;j<size;j++)
        {
            if (val[0][j]<val[0][buf]) {
				buf=j;
			}
        }
	my_swap(val[0]+i,val[0]+buf);
	my_swap(val[1]+i,val[1]+buf);
	my_swap(val[2]+i,val[2]+buf);


    }//fin for


	for (i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(((val[0][j]==val[0][i])&&(val[1][j]>val[1][i])) || ((val[0][j]==val[0][i])&&(val[1][j]==val[1][i])&&(val[2][j]<val[2][i])))
			{
				my_swap (val[0]+j,val[0]+i);
				my_swap (val[1]+j,val[1]+i);
				my_swap (val[2]+j,val[2]+i);
			}// fin if
		}//fin for j

	}// fin for i

	// Affichage
	for (i=0;i<taille;i++)
	{
		j=val[2][i];
		//printf("J= %d et Taille=%d ;\n", j, taille);
		my_putstr(tab[j]);
		write(1,"\n",1);
	}

}

/*
int main()
{   char tab[3][15] = {"not prepared !","You","are"};
	char tab2[5][5] = {"ab","ba","ca","Da","aE"};
	char *f[3] = {tab[0], tab[1], tab[2]};
	char *f2[5] = {tab2[0], tab2[1], tab2[2], tab2[3], tab2[4]};
	my_show_array(f, 3);my_show_array(f2, 5);
	return (0);
}
*/
