#include<string.h>
#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int len,i,j;
		char s[1000000];
		scanf("%s",s);
	//	printf("%s",s);
		len=strlen(s);
		int a,b,c;
		int count=0;
		for(i=0;i<len;i++)
		{
			a=0,b=0,c=0;
				if(s[i]=='J')
				{
					a++;
				}
				else if(s[i]=='M')
				{
					b++;
				}
				else
				{
					c++;
				}
			for(j=i+1;j<len;j++)
			{
				if(s[j]=='J')
				{
					a++;
				}
				else if(s[j]=='M')
				{
					b++;
				}
				else
				{
					c++;
				}
			}
			if(a==b&&a==c)
			{
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
