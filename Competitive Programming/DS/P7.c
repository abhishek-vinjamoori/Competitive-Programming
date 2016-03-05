#include<stdio.h>
#include<string.h>
typedef long long int ll;
ll  tmp[1000100];
void merge(ll c[],ll start,ll mid,ll end)
{
	ll i,j,k=start;
	i=start;j=mid+1;
	while(i<=mid&&j<=end)
	{
		if(c[i]<c[j])
		{
			tmp[k++]=c[i];
			i++;
		}
		else
		{
			tmp[k++]=c[j];
			j++;
		}
	}
	while(i<=mid)
	{
		tmp[k++]=c[i];
		i++;
	}
	while(j<=end)
	{
		tmp[k++]=c[j];
		j++;
	}
	for(i=start;i<=end;i++)
	{
		c[i]=tmp[i];
	}
	return;
}
void mergesort(ll arr[],ll start,ll end)
{
	ll i,j,k;
	ll mid;
	mid=(start+end)/2;
	if(start==end)
	{
		return;
	}
	mergesort(arr,start,mid);
	mergesort(arr,mid+1,end);
	merge(arr,start,mid,end);
	return;
}
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		ll n,i,j;
		scanf("%Ld",&n);
		ll a,b,c;
		ll arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%Ld",&arr[i]);
		}
		mergesort(arr,0,n-1);
		ll count=0;
		int tm,st=0;
		for(i=0;i<n;i++)
		{
			if(arr[i]-arr[i+1]==0)
			{
				if(st!=1)
				{
				tm=i;
				}
				st=1;
			}
			if(arr[i]-arr[i+1]!=0&&st==1)
			{
				ll tmp=(i-tm+1);
				tmp=((tmp)*(tmp-1))/2;
				count+=(tmp);
				st=0;
			}  
		}
		if(st==1)
		{
		ll tmp=(i-tm+1);
		tmp=((tmp)*(tmp-1))/2;
		count+=(tmp);
		}
	printf("%Ld\n",count);
	}
}
