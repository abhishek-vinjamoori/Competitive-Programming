#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cin >>n;
	long long int a[100];
	long long int ans=0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	sort(a,a+n);
	long long int cn=0;
	long long int maxx=1e9+7;
	for(int j=n-1;j>=0;j--)
	
	{
		if(a[j]>maxx)
		{
			ans+=a[j];
			maxx=a[j];
		}
		else
		{
			maxx--;
			ans+=max(maxx,0ll);
		}

	}
	printf("%Ld\n",ans);;
}
