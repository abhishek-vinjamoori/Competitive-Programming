#include<stdio.h>
int k;
int a[100100];
void qsort(int start,int end)
{
	int endd,sttart,temp,pivot;
//	middle=(start+end)/2;
	if(start<end)
	{
		pivot=start;
		sttart=start;
		endd=end;
		while(sttart<endd)
		{
		/*	if(sttart==k)
			{
			return;	
			} */  
			while(a[sttart]<=a[pivot]&&sttart<end)
			{
				sttart++;
			}
			while(a[endd]>a[pivot])
			{
				endd--;
			}
			if(sttart<endd)
			{
				temp=a[sttart];
				a[sttart]=a[endd];
				a[endd]=temp;

			}
		}
			temp=a[pivot];
			a[pivot]=a[endd];
			a[endd]=temp;
	/*		if(a[sttart]>=a[endd])
			{
			} */
		qsort(start,endd-1);
		qsort(endd+1,end);
	}

}
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
	int i,j,n;
//	printf("Enter n followed by 'n' elements:\n");
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	qsort(0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	} 
	printf("\n"); 
	printf("%d\n",a[k-1]);
	}
	return 0;
}
