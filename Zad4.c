#include <stdlib.h>
#include <stdio.h>

void zeruj(int **tab, int n, int m)
{
	int i,j;
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			tab[i][j]=0;
		}
	}
}

int **funk (int n, int m)
{
	int **tab=malloc(n*sizeof(int**));
	int i,j;
	for (i=0;i<n;i++)
	{
		tab[i]=malloc(m*sizeof(int*));
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			tab[i][j]=i*j;
		}
	}
	tab [0][0]=7;
	return tab;
}

void wypisz (int **tab, int n, int m)
{
	int i,j;
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			printf ("%d ",tab[i][j]);
		}
		printf ("\n");
	}
}

int main ()
{
	int n,m,i,j;
	scanf ("%d %d",&n,&m);
	int **ta=funk(n,m);
	printf ("Adres to %d\n",*ta);
	wypisz (ta,n,m);
	printf ("\n");
	zeruj (ta,n,m);
	wypisz (ta,n,m);
	return 0;
}
