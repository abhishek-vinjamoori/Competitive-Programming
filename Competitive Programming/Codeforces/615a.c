#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n+1][m+1];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			a[i][j]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		int tmp;
		while(t--)
		{
			scanf("%d",&tmp);
			a[i][tmp-1]=1;
		}
	}
	int t;
	for(i=0;i<m;i++)
	{
		t=0;
		for(j=0;j<n;j++)
		{
			t+=a[j][i];
		}
		if(t==0)
		{
			printf("NO\n");
			return 0;
		}
	}
		printf("YES\n");
	
}
