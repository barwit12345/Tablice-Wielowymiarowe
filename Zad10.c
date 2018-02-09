#include <stdlib.h>
#include <stdio.h>

int *funk (int **tab,int n)
{
	int i,x=1;
	for (i=0;i<n;i++)
	{
		x=x*tab[i][i];
	}
	int *tbl=malloc(x*sizeof(int));
	for (i=0;i<x;i++)
	{
		tbl[i]=i;
	}
	return tbl;
}

int main ()
{
	int i,j,x=1,n;
	scanf ("%d",&n);
	int **tab=malloc(n*sizeof(int**));
	for (i=0;i<n;i++){
		*(tab+i)=malloc(n*sizeof(int*));
		}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			scanf ("%d",&tab[i][j]);
		}
	}
	int *wyj=funk(tab,n);
	printf ("Adres to %d\n",wyj);
	for (i=0;i<n;i++)
	{
		x=x*(*(*(tab+i)+i));
	}
	printf ("X to %d\n",x);
	for (i=0;i<x;i++)
	{
		printf ("%d ",*(wyj+i));
	}
	return 0;
}
