#include<stdio.h>
int main()
{
	char st[100];
	int week[7]={52,52,52,52,53,53,52};
	int month[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	gets(st);
	int v = (int)st[0];
	if(st[5]=="w")
	{   
		printf("%d\n",week[v-1]);
	}   
	else
	{   
		int i;
		int cn=0;
		for(i=0;i<7;i++)
		{
			if(v<=month[i])
			{
				cn++;
			}
		}
		printf("%d\n",cn);
	}   
	return 0;

}

