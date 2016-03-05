#include<stdio.h>
int maxheap[10000];
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
void insert_min(int nu) 
{
	int i,tmp;
	maxheap[0]++;
	i=maxheap[0];
	maxheap[i]=nu;
	while(i>1)
	{
		if(maxheap[i/2]>maxheap[i])
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
void delete_min(int ind)
{
	int max=ind;
	if(2*ind<=maxheap[0]&&maxheap[max]>maxheap[2*ind])
	{
		max=2*ind;
	}
	else if(2*ind+1<=maxheap[0]&&maxheap[max]>maxheap[2*ind+1])
	{
		max=2*ind+1;
	}
	int tmp;
	if(max!=ind)
	{
		tmp=maxheap[ind];
		maxheap[ind]=maxheap[max];
		maxheap[max]=tmp;
		delete_min(max);
	}
	return;
}
int main()
{
	maxheap[0]=0;
	int n,i;
	int s=5;
	while(s--)
	{
		scanf("%d",&n);
		insert_min(n);
//		for(i=1;i<=a[0];i++)
		{
			//		printf("%d ",maxheap[i]);
		}
	}
	s=5;
	while(s--)
	{
		printf("Min:%d ",maxheap[1]);
		maxheap[1]=maxheap[maxheap[0]];
		maxheap[0]--;
		heapify(1);
		for(i=1;i<=maxheap[0];i++)
		{
	//		printf("%d ",maxheap[i]);
		}
		printf("\n");
	} 
	return 0;
}
