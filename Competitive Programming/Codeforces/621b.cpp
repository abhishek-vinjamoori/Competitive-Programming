#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<cmath>
using namespace std;
int comb(int s)
{
	
	int an = (s*(s-1))/2;
	if(an<=0)
	{
		return 0;
	}
	return an;
}
int main()
{
	int n;
	cin >> n;
	int a[100010]={0};
	int b[100010]={0};
	int t1,t2;
	for(int i=0;i<n;i++)
	{
		cin >> t1 >> t2;
		a[t1+t2]++;
		b[2001-(t1-t2)]++;
	}
	long long int tot=0;
	for(int j=0;j<20000;j++)
	{
			tot+=comb(b[j]);	
			tot+=comb(a[j]);
	}
	printf("%I64d\n",tot);
	return 0;
}
