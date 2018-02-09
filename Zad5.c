double suma (double **tab,int n,int m)
{
	int i,j;
	double s=0;
	for (i=0,i<n,i++)
	{
		for (j=0,j<m,j++)
		{
			s=s+tab[i][j];
		}
	}
	return s;
}
