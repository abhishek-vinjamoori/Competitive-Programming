#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cin >>n;
	int a[100];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	sort(a,a+n);
	int curr=a[n-1];
	long long int cn=0;
	for(int i=n-2;i>=0;i--)
	{
		if(a[i]<=0)
		{
			break;
		}
		if(curr==a[i])
		{
			int j=i;
			int cnt=1;
			while(curr==a[j])
			{
				//printf("Com:%d\t%d \n",a[j],cnt);
				a[j] -=cnt;
				cnt++;
				if(a[j]>=0)
				{
					//printf("Adding:%d \n",a[j]);
					cn += a[j];
				}


				j--;
			}
			i=j+1;
			curr=a[i];
			for(int k=i;k>=0;k--)
			{
				if(a[k]>curr)
				{
					a[k]=curr;
				}
			}
			continue;
		}
		if(a[i]<=0)
		{
			break;
		}
		cn+=a[i];
		curr=a[i];
	}
	printf("%Ld\n",cn+a[n-1]);
	printf("%d\n",max(2,011));
}
