#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int hei[n+2];
	int pos[n+2];
	int i,j,k,l,h,x;
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&pos[i],&hei[i]);
	}
	int fin=0;
	for(i=1;i<n-1;i++)
	{
		if(pos[i]-pos[i-1]>hei[i])
		{
			fin++;
			
		}
		else if(pos[i+1]-pos[i]>hei[i])
		{
			fin++;
			pos[i]+=hei[i];
		}
	}
	if(n>=2)
	{
		printf("%d\n",fin+2);
		return 0;
	}
		printf("1\n");
	return 0;
}
