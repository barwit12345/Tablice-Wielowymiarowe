int wiersz (double **tab,int n,int m)
{
	int i,j,s,c,w=1;
	if (n==1) return 1;
	for (j=0;j<m;j++)
	{
		s=s+tab[1][j];
	}
	for (i=1,j=0;i<n;i++)
	{
		for (j=0,c=0;j<m;j++)
		{
			c=c+tab[i][j];
		}
		if (c>s)
		{
			s=c;
			w=i+1;
		}
	}
	return w;
}
