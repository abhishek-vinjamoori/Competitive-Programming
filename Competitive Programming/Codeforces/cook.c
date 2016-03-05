#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,i,j,l;
		char* str[100];
		scanf("%d%d",&n,&k);
		int arr[1000]={0};
		for(i=0;i<n;i++)
		{
			str[i]=(char*)malloc(sizeof(char)*1000000);
			scanf("%s",str[i]);
		}
		/*for(i=0;i<n;i++)
		  {
		  printf("%s\n",str[i]);
		  } */
		while(k--)
		{
			scanf("%d",&l);
			for(j=0;j<l;j++)
			{
				char temp[100000];
				scanf("%s",temp);
				for(i=0;i<n;i++)
				{
					if(!strcmp(str[i],temp))
					{
						arr[i]=1;
					}
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if(arr[i])
			{
				printf("YES ");
			}
			else
			{
				printf("NO ");
			}
		}
		printf("\n");
	}
}

