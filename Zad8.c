#include <stdlib.h>
#include <stdio.h>

int por (int **a,int **b,int n,int m,int x,int y)
{
	int *zb=malloc((n*m)*sizeof(int*));
	int i,j,k,l=0;
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			for (k=0;k<l;k++)
			{
				if (a[i][j]==zb[k]) break;
			}
			if (k==l)
			{
				zb[l]=a[i][j];
				l++;
			}
		}
	}
	for (i=0;i<x;i++)
	{
		for (j=0;j<y;j++)
		{
			for (k=0;k<l;k++)
			{
				if (b[x][y]==zb[k]) break;
			}
			if (k==l) return 0;
		}
	}
	return 1;
}
