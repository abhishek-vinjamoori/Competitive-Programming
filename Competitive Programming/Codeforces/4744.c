#include<stdio.h>
int k;
int b[100000];
int main()
{
	int i,j,n,m;
	scanf("%d",&n);
	int a[n];
	scanf("%d",&a[0]);
	b[0]=a[0];
	k=1;
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[k++]=a[i]+b[k-1];
	}
/*	for(i=0;i<k;i++)
	{
		printf("%d ",b[i]);
	} */
	int mas;
	scanf("%d",&mas);
	m=mas;
	int index;
	while(m)
	{
		scanf("%d",&j);
		for(i=0;i<k;i++)
		{
			if(b[i]>=j)
			{
				printf("%d \n",i+1);
				break;
			}
		}
		m=m-1;
	}
	return 0;
}
