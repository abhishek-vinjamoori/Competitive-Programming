#include<stdio.h>
typedef long long int ll;
ll max(ll r, ll g, ll b)
{
	if(r>=g && r>=b)
	{
		return r;
	}	
	else if(g>=r && g>=b)
	{
		return g;
	}
	else if(b>=g && b>=r)
	{
		return b;
	}
}
ll min(ll r,ll g, ll b)
{
	if(r<=g && r<=b)
	{
		return r;
	}	
	else if(g<=r && g<=b)
	{
		return g;
	}
	else if(b<=g && b<=r)
	{
		return b;
	}

}
int main()
{
	ll r,g,b;
	scanf("%I64d%I64d%I64d",&r,&g,&b);
	ll maxi=max(r,g,b);
	ll mini=min(r,g,b);
	ll mid=r+g+b-maxi-mini;
	ll sum=0;
	if(2*mini+2*mid<maxi)
	{
		printf("%I64d\n",mid+mini);
		return 0;
	}
	printf("%I64d\n",(r+g+b)/3);
	return 0;
}
