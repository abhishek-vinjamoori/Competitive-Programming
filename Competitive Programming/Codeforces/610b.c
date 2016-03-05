#include<stdio.h>
typedef long long int ll;
int max(int x, int y)
{
	    return x < y ? y : x;
}
int main()
{
	int a[1000000];
	int i,j,k,n;
	scanf("%d",&n);
	ll min = 10000000000;
	int mincnt=1;
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
		if(a[i]<min)
		{
			min=a[i];
			mincnt=1;
		}
		else if(a[i]==min)
		{
			mincnt++;
		}
	}
	ll res = (ll)min*(ll)n;
	int cmax=0;
	int cnt=0;
	for(i=0;i<2*n;i++)
	{
		if(a[i%n]==min)
		{
			cmax=0;
		}
		else
		{
			cmax++;
			cnt=max(cnt,cmax);
		}

	}

	res += cnt;
	printf("%I64d\n",res);
	return 0;
}
