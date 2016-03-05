#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int a[100000];
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		sort(a,a+n);
		int ans=0;
		for(int i=0;i<n/2;i++)
		{
			ans+=(a[n-i-1]-a[i]);
		}

		cout << ans << endl;
	}
}
