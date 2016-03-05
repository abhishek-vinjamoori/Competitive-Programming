#include<stdio.h>
typedef long long int ll;
long long int powmod(ll x, ll y)
{
    long long int temp;
    if( y == 0)
        return 1;
    temp = powmod(x, y/2);
    if (y%2 == 0)
        return (temp*temp);
    else
        return (((ll)(x*temp))*temp);
}
int main()
{
	ll l,r,k,i;
	scanf("%I64d%I64d%I64d",&l,&r,&k);
	int fl=0;
	ll tmp=0;
	for(i=0;tmp*k<=r;i++)
	{
		tmp=powmod(k,i);
		if(tmp>=l&&tmp<=r)
		{
			fl=1;
			printf("%I64d ",tmp);
		}
	}
	if(!fl)
	{
		printf("-1\n");
		return 0;
	}
	printf("\n");
	return 0;
}
