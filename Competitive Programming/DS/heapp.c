#include<stdio.h>
int maxheap[1000];
void insert_max(int nu)
{
	int i,tmp;
	maxheap[0]++;
	i=maxheap[0];
	maxheap[i]=nu;
	while(i>1)
	{
		if(maxheap[i/2]<maxheap[i])
		{
			tmp=maxheap[i/2];
			maxheap[i/2]=maxheap[i];
			maxheap[i]=tmp;
			i=i/2;
		}
		else
		{
			break;
		}
	}
}
void max_heapify(int ind)
{
	int l=ind;
	if(2*ind<=maxheap[0]&&maxheap[l]<maxheap[2*ind])
	{
		l=2*ind;
	}
	if(2*ind+1<=maxheap[0]&&maxheap[l]<maxheap[2*ind+1])
	{
		l=2*ind+1;
	}
	int tmp;
	if(l!=ind)
	{
		tmp=maxheap[l];
		maxheap[l]=maxheap[ind];
		maxheap[ind]=tmp;
		max_heapify(l);
	}
	return;
}
int main()
{
	int n,i,j,k;
	n=5;
	while(n--)
	{
		scanf("%d",&j);
		insert_max(j);
	}
	n=5;
	while(n--)
	{
		printf("%d ",maxheap[1]);
		maxheap[1]=maxheap[maxheap[0]];
		maxheap[0]--;
		max_heapify(1);
	}
	return 0;
}
