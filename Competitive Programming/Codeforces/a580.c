#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int max=1,i;
	int curr=1;
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			if(curr>=max)
			{
				max=curr;
			}
			curr=1;
		}
		else
		{
			curr++;
		}
	}
	if(curr>=max)
	{
		max=curr;
	}
	printf("%d\n",max);
	return 0;
}
