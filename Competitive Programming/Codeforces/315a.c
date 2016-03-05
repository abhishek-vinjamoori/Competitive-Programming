#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,j,cn;
	int* a;
	int* b;
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	b=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",a+i,b+i);
	}
	cn=n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j]&&i!=j)
			{
				cn--;
				break;
			}
		}
	}
	printf("%d\n",cn);
	return 0;
}

