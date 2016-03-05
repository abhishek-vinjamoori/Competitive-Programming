#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=0;
	for(i=0;i<n-1;i++)
	{
		j=a[i+1]-a[i];
		if(j>max)
		{
			max=j;
		}
	}
//	printf("%d\n",max);
	int min=1000000;
	for(i=0;i<n-2;i++)
	{
		j=a[i+2]-a[i];
		if(j>max)
		{
			if(j<min)
			{
			min=j;
			}
		}
		else
		{
			min=max;
		}
	//printf("In:%d\n",min);
	}
	printf("%d\n",min);
	return 0;
}
