#include<stdio.h>
#include<stdlib.h>
int maxheap[100100];
int minheap[100100];
int median;
void insert_min(int);
void insert_max(int);
void delete_min();
void delete_max();
int median(int)
int check();
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int a,b,c,n,i,j,k,fin;
		scanf("%d%d%d%d",&a,&b,&c,&n);
		median=1;
		fin=1;
		maxheap[0]=1;
		maxheap[1]=1;
		minheap[0]=0;
		for(i=2;i<=n;i++)
		{
			k=(a*median(i-1)+b*i+c)%mod;
			fin+=k;
		}
		printf("%d\n",fin);
	}
}
void insert_min(int nu)
{
	int i;
	minheap[0]++;
	i=minheap[0];
	minheap[i]=nu;
	while(i>1)
	{
		if(minheap[i/2]>minheap[i])
		{
			swap(minheap[i/2],minheap[i]);
			i=i/2;
		}
		else
		{
			break;
		}
	}
}
void insert_max(int nu)
{
	int i;
	maxheap[0]++;
	i=maxheap[0];
	maxheap[i]=nu;
	while(i>1)
	{
		if(maxheap[i/2]<maxheap[i])
		{
			swap(maxheap[i/2],maxheap[i]);
			i=i/2;
		}
		else
		{
			break;
		}
	}
}
void delete_max(int ind)
{
	int max=ind;
	if(2*ind<=maxheap[0]&&maxheap[ind]<maxheap[2*ind])
	{
		max=2*ind;
	}
	else if(2*ind+1<=maxheap[0]&&maxheap[ind]<maxheap[2*ind+1])
	{
		max=2*ind+1;
	}
	int tmp;
	if(max!=ind)
	{
		tmp=a[ind];
		a[ind]=a[max];
		a[max]=tmp;
		delete_max(max);
	}
	return;
}
void delete_min(int ind)
{
	int max=ind;
	if(2*ind<=minheap[0]&&minheap[ind]>minheap[2*ind])
	{
		max=2*ind;
	}
	else if(2*ind+1<=minheap[0]&&minheap[ind]>minheap[2*ind+1])
	{
		max=2*ind+1;
	}
	int tmp;
	if(max!=ind)
	{
		tmp=a[ind];
		a[ind]=a[max];
		a[max]=tmp;
		delete_min(max);
	}
	return;
}
