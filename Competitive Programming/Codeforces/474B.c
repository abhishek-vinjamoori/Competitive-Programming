#include<stdio.h>
int k;
int b[100000];
int BinarySearch(int j)
{
	int mid,start,end;
	start=0,end=k-1;
	while(start<=end)
	{
		mid=(start+end)/2;
		printf("Start:%d Mid:%d End:%d\n",start,mid,end);
		if(b[mid]>j)
		{
			if(b[mid-1]<j)
			{
				return mid;
			}
			end=mid-1;
		}
		else if(b[mid]<j)
		{
			if(b[mid+1]>j)
			{
				return mid+1;
			}
			start=mid+1;
		}
		else if(b[mid]==j)
		{
			return mid;
		}

	}
	return mid;
}
int main()
{
	int i,j,n,m;
	scanf("%d",&n);
	int a[n];
	scanf("%d",&a[0]);
	b[0]=a[0];
	k=1;
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[k++]=a[i]+b[k-1];
	}
	/*      for(i=0;i<k;i++)
		{
		printf("%d ",b[i]);
		} */
	int mas;
	scanf("%d",&mas);
	m=mas;
	int index;
	while(m)
	{
		scanf("%d",&j);
		index=BinarySearch(j);
		printf("%d \n",index+1);
		m=m-1;
	}
	return 0;
}
