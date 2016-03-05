#include<string.h>
#include<stdio.h>
int main()
{
	int i,j,k,len;
	int cnta=0;
	int cntb=0;
	int st=0;
	char pal[100000];
	scanf("%s",pal);
	len=strlen(pal);
	for(i=0;i<len;i++)
	{
		if(pal[i]=='a')
		{
			cnta++;
			st=1;
		}
		else
		{
			cntb++;
			st=0;
		}
	}
	printf("%d %d\n",cnta+len,cntb);
}

