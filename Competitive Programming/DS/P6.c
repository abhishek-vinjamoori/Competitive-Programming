#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		long long int n,i,j;
		scanf("%d",&n);
		long long int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%Ld",&a[i]);
		}
		long long int tmp,swap;
		long long int cmp=0;
		swap=0;
		for(i=1;i<n;i++)
		{
			tmp=a[i];
			j=i-1;	
			while(a[j]>tmp&&j>=0)
			{
				a[j+1]=a[j];
				swap++;
				j--;
				cmp++;
			}
			if(j>=0)
			cmp++;
			if(i!=j+1)
			{
		//		swap++;
				a[j+1]=tmp;
			}
		}
//		printf("%Ld %Ld\n",cmp,swap);
		printf("%Ld\n",cmp-swap);
	}
}
