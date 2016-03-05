#include<stdio.h>
typedef long long int ll;
int main()
{
	ll i,j,a,b,c;
	scanf("%I64d%I64d",&a,&b);
	ll cnt=0;
	for(i=0;1LL<<i<=2*b;i++)
	{
	//	printf("%Ld\n",i);
		ll res;
		ll tmp=1LL<<i;
		tmp--;
		for(j=0;j<=i-2;j++)
		{
			//printf("%Ld\t%Ld\t%Ld\n",i,1LL<<i,1LL<<j);
			res=tmp-(1LL<<j);
			//printf("%Ld\t%Ld\n",i,res);
			if(res>=a&&res<=b)
			{
				cnt++;
			}
		}
	}
	printf("%I64d\n",cnt);
}
