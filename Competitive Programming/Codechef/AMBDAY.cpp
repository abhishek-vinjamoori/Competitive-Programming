#include <stdio.h>
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int f,h,w,j,i,k,min=1000000000;
		scanf("%d%d%d",&f,&h,&w);
		k=0;
		int a[1000000];
		for(j=0;j<f;j++)
		{
				scanf("%d",&a[j]);
		}
		a[j]=w;
		sort(a,a+f+1);
		for(j=0;j<=f;j++)
		{
			if(a[j]-k<min)
			{
				min=a[j]-k;
			}
			k=a[j];
		}
		printf("%d\n",min*h);
	}

	return 0;
}
