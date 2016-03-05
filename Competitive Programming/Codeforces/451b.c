#include<stdio.h>
int count=0;
void merge(int a[], int b[], int c[],int m, int g)
{
	int i,j,k;
	i=0;
	j=0;
	k=0;
	while(i<m&&j<g)
	{
		if(a[i]>b[j])
		{
			count++;
			c[k++]=b[j++];
		}
		else
		{
			c[k++]=a[i++];
		}
	}
	while(i<m)
	{
		c[k++]=a[i++];
	}
	while(j<g)
	{
		c[k++]=b[j++];
	}
	return;
}
void msort(int a[],int n)
{
	int i,j,k,left[n],right[n];
	if(n<=1)
	{
		return ;
	}
	for(i=0;i<n/2;i++)
	{
		left[i]=a[i];
	}
	for( ; i<n;i++)
	{
		right[i-n/2]=a[i];
	}
	msort(left,n/2);
	msort(right,n-n/2);
	//	printf("n is :%d\n",n);
	merge(left,right,a,n/2,n-n/2);
	return;
}
int main()
{
	int i,j,n;
	int start,end,state=0;
	scanf("%d",&n);
	int a[n];
	int main[n];
	end=n-1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&main[i]);
		a[i]=main[i];
	}
	msort(a,n);
	if(count==0)
	{
		printf("yes\n1 1\n");
	}
	else
	{
		for(i=0;i<n-1;i++)
		{
			if(main[i]-main[i+1]>0&&state==0)
			{
				start=i;
				state=1;
			}
			else if(main[i]-main[i+1]<0&&state==1)
			{
				end=i;
				break;
			}
		}
		int swap=start;
		int sw=end,temp;
		// printf("%d %d\n",start+1,end+1);

		/*	for(swap=start;swap<=end/2;swap++)
			{
			temp=main[swap];
			main[swap]=main[end-swap+1];
			main[end-swap+1]=temp;
			}  */
		while(swap < sw)
		{
			temp = main[swap];  
			main[swap] = main[sw];
			main[sw] = temp;
			swap++;
			sw--;
		}   

/*		for(i=0;i<n;i++)
			printf("%d ",a[i]);
		printf("\n");
		for(i=0;i<n;i++)
			printf("%d ",main[i]);
		printf("\n"); */
		for(i=0;i<n;i++)
		{
			if(main[i]!=a[i])
			{
				printf("no\n");
				return 0;
			}
		}
		printf("yes\n");
		printf("%d %d\n",start+1,end+1);

	}
	return 0;
}
