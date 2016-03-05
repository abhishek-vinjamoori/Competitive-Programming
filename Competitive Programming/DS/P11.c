#include<stdio.h>
typedef long long int ll;
int a[100100];
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int n,i,j,k,max,min,ind;
		scanf("%d%d",&n,&k);
	/*	long long int* a;
		a=(long long int*)malloc(sizeof(long long int)*n); */
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		if(k<n/2)
		{
			while(k--)
			{
				min=1000000001;
				for(i=0;i<n;i++)
				{
					if((a[i]<min))
					{
						ind=i;
						min=a[i];
					}
				}
				a[ind]=1000000001;
			}
			printf("%d\n",min);
		}
		else
		{
			int s;
			s=n-k+1;
			while(s--)
			{
				max=-1;
				for(i=0;i<n;i++)
				{
					if((a[i]>max))
					{
						ind=i;
						max=a[i];
					}
				}
				a[ind]=-1;
			}
			printf("%d\n",max);
		}	
	}
	return 0;
}
