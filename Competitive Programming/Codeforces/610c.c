#include<stdio.h>
char neg(char s)
{
	if(s=='+')
	{
		return '*';
	}
	return '+';
}
int main()
{
	char s[512][512];
	int i,j,k,n;
	s[0][0]='+';
	for(i=0;i<9;i++)
	{
		int tmp=1<<i;
		for(k=0;k<tmp;k++)
		{
			for(j=0;j<tmp;j++)
			{
				s[k][j+tmp]=s[k][j];
				s[j+tmp][k]=s[k][j];
				s[k+tmp][j+tmp]=neg(s[k][j]);
			}
		}
	}
	scanf("%d",&n);
	for(i=0;i<1<<n;i++)
	{
		for(j=0;j<1<<n;j++)
		{
			printf("%c",s[i][j]);
		}
		printf("\n");
	}
}
