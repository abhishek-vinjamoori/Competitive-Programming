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
		ll tmp=0;
		min=a[0];
		for(i=0;i<n-k+1;i++)
		{
			if(min==a[tmp]&&a[i]<=min)
			{
				min=a[i];
				for(j=i;j<i+k;j++)
				{
					if(a[j]>min)
					{
						min=a[j];
					}
				}
				if(i==n-k)
				{
					printf("%Ld",min);
				}
				else
				{
					printf("%Ld ",min);
				}
			}
			else if(min==a[tmp]&&a[i]>min)
			{
				min=a[i];
				if(i==n-k)
				{
					printf("%Ld",min);
				}
				else
				{
					printf("%Ld ",min);
				}

			}
			else
			{
				/*			min=a[i];
							for(j=i;j<i+k;j++)
							{
							if(a[j]<min)
							{
							min=a[j];
							}
							ll tmp=i;
							} */
				if(i==n-k)
				{
					printf("%Ld",min);
				}
				else
				{
					printf("%Ld ",min);
				}
			}
			tmp=i;
		}
		printf("\n");
	}
}
