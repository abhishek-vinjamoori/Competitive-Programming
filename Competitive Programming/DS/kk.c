#include<stdio.h>
int main()
{
	int n,c;
	int a[100];
	int i=0;
	while(1)
	{
		scanf("%d",&a[i]);
		i++;
		if((c=getchar())=='\n')
		{
			break;
		}
	}
	int d;
	for(d=0;d<i;d++)
	{
		printf("%d ",a[d]);
	}
}
