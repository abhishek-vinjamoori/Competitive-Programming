#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[50][50];
	cin >> n;
	int b[100]={0};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int kl=0;
	int i,j;
	int z=n;
	for(z=n;z>0;z--)
{
	for(i=0;i<n;i++)
	{
		int fl=0;
		for(j=0;j<n;j++)
		{
			
			if(a[i][j]==n-z+1|| a[i][j]==0)
			{
				fl++;
			}
		}
		if(fl==n)
		{
			if(!b[i])
			b[i]=n-z+1;
			for(j=0;j<n;j++)
			{
				a[i][j]=0;
			}
			for(int kk=0;kk<n;kk++)
			{
				a[kk][i]=0;
			}

		}
	}
	}
	int fll=0;
	for(int f=0;f<n;f++)
	{
		if(b[f]==n-1&&fll==0)
		{
			fll=1;
			b[f]++;
		}
		cout << b[f] << " ";
	}
cout << endl;	

}
