#include<stdio.h>
#include<iostream>
using namespace std;
int a[1000000];
int glb=0;
int b[1000000]={0};
void sieve()
{
	a[0]=a[1]=1;	
	for(int i=2;i<1000000;i++)
	{
		if(!a[i])
		{
			for(int j=2;i*j<1000000;j++)
			{
				a[i*j]=1;
			}
		}
	}
}

void result(int k,int p)
{
	if(k<=0 || p<=0)
	{
		return;
	}
	printf("Cont:%d\t%d\n",k,p);
	for(int j=p;j>=0;j--)
	{
		if(!a[j])
		{
			printf("Fin:%d\t%d\n",k,j);
			result(k-p,j);
		}
	}
	b[glb++]=p;
	return ;

}

int main()
{
	sieve();
	int n;
	cin >> n;
	for(int i=0;i<100000;i++)
	{
		if(i>n)
		{
			break;
		}
		if(!a[i])
		result(n,i);
	}
	for(int kk=0;kk<glb;kk++)
	{
		cout << b[kk] << endl;
	}
}
