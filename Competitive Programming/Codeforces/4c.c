#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j,k,n;
	int num[100005]={0};
	char s[100005][35];
	char main[35];
	scanf("%d",&n);
	scanf("%s",main);
	printf("OK\n");
	strcpy(s[i],main);
	i++;
	n--;
	int state;
	while(n--)
	{
		state=0;
		scanf("%s",main);
		for(j=0;j<i;j++)
		{
			if(strcmp(s[j],main)==0)
			{
				state=1;
				printf("%s%d\n",main,++num[j]);	
				i++;
				break;
			}
		}
		if(state==0)
		{
			strcpy(s[i],main);
			printf("OK\n");
			i++;
		}
	}
	return 0;

}

