#include<stdio.h>
typedef long long int ll;
int main()
{
	int tes;
	scanf("%d",&tes);
	while(tes--)
	{
		ll a[10010],n,k,j,i,min;
		scanf("%Ld %Ld",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%Ld",a+i);
		}
		for(i=0;i<n-k+1;i++)
		{
			min=a[i];
			for(j=i;j<=i+k-1;j++)
			{
				if(a[j]<min)
				{
					min=a[j];
				}

			}
			if(i==n-k)
			{
				printf("%Ld",min);
			}
			else
			printf("%Ld ",min);
		}
		printf("\n");
	}
}
