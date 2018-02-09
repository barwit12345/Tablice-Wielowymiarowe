

void mnozacierze (**a,**b,**c,n,m)
{
	int i,j,k,l;
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			for (k=0;k<m;k++)
			{
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
}
