#include<stdio.h>
int pre[1001000],in[1001000],lol[1001000],news[1001000];
int main()
{
	int n,i,j,n1,n2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		lol[i]=0;
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&pre[i]);
		lol[pre[i]]=i;
	}
/*	for(i=0;i<n;i++)
	{
		printf("%d ",lol[i]);
	} */
	for(i=0;i<n;i++)
	{
		scanf("%d",&in[i]);
	}
	int tes,st=0;
	scanf("%d",&tes);
	while(tes--)
	{
		scanf("%d%d",&n1,&n2);
		for(i=0;i<n;i++)
		{
			if(in[i]==n1)
			{
				st=1;
				break;
			}
			else if(in[i]==n2)
			{
				st=2;
				break;
			}
		}
		int cn=0;
		if(st==1)
		{
			for(j=i;j<n;j++)
			{
				news[cn++]=in[i++];
				if(in[j]==n2)
				{
					break;
				}
			}
		}
		else
		{
			for(j=i;j<n;j++)
			{
				news[cn++]=in[i++];
				if(in[j]==n1)
				{
					break;
				}
			}

		}
/*		for(i=0;i<cn;i++)
		{
			printf("%d",news[i]);
		} */
		int min=100101;
		for(i=0;i<cn;i++)
		{
			if(lol[news[i]]<min)
			{
				min=lol[news[i]];
			}
		}
		printf("%d\n",pre[min]); 
	}
	return 0;
}
