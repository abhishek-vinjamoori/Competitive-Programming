#include<stdio.h>
int main()
{
	int n,i,j,k,l;
	scanf("%d",&n);
	int a[n+1][n+1];
	int b[10000];
	int c=0;
	k=0;
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			int x=a[i][j];
			if(x==0||x==2||x==-1)
			{
				c++;
			}
		}
		if(c==n)
		{
			b[k++]=i+1;
		}
	}
	printf("%d\n",k);
	for(i=0;i<k;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	return 0;
}

