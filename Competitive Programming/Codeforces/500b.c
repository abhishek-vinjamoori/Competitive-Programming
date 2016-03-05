#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,k,d;
	scanf("%d",&n);
	int *a;
	a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",a+i);
	}
	char s[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%c",&s[i][j]);
		}
		getchar();
	}
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				s[i][j]|=s[i][k]&s[k][j];
			}
		}
	}
/*	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c ",s[i][j]);
		}
		printf("\n");
	} */
	int state;
	while(1)
	{
		state=0;
	for(i=0;i<n;i++)
	{

		for(j=i+1;j<n;j++)
		{
		//	if(a[i]>a[j])
			if(a[i]>a[j]&&(s[i][j]=='1'||s[j][i]=='1'))
			{
				state=1;
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	if(state==0)
	break;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;

}
