#include<stdio.h>
typedef long long int ll;
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		ll n,i,max,min;
		scanf("%Ld",&n);
		ll a[n];
		for(i=0;i<n;i++)
		{
			scanf("%Ld",&a[i]);
		}
		min=max=a[0];
		ll cnt=0;
		for(i=1;i<n;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
			}
			else
			{
				cnt++;
			}
		}
		printf("%Ld\n",cnt);
	}
	return 0;
}
