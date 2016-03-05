#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	sort(a,a+n);
	long long int sum=0;
	long long int fin=0;
	int min=1000000010;
	for(int j=n-1;j>=0;j--)
	{
		sum+=a[j];
		if(a[j]%2&&a[j]<min)
		{
			min=a[j];
		}
	}
	if(sum%2==0)
	{
		printf("%I64d\n",sum);
	}
	else
	{
		printf("%I64d\n",sum-min);
	}

}
