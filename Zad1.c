#include <stdio.h>
#include <stdlib.h>

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

int main ()
{
	int n,m,i,j;
	scanf ("%d %d",&n,&m);
	int **ta=funk(n,m);
	printf ("Adres to %d\n",*ta);
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			printf ("%d ",ta[i][j]);
		}
		printf ("\n");
	}
	return 0;
}
	
