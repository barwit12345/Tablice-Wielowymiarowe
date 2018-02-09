#include <stdio.h>

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
