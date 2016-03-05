#include<stdio.h>
#include<string.h>
int palindrome(char new[],int len)
{
	//printf("Init:%s\n",new);
	int i,j;
	for(i=0;i<len/2;i++)
	{
		if(new[i]!=new[len-i-1])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i,j,k,len;
	char s[11],new[11];
	char c,tmp;
	int p1;
	scanf("%s",s);
	len=strlen(s);
	for(j=0;j<26;j++)
	{
//		strcpy(new,s);
		c=j+'a';
	//	printf("c:%c ",c);
		for(i=0;i<=len;i++)
		{
//			strcpy(new,s);
			for(p1=0;p1<len;p1++)
			{
				new[p1]=s[p1];
			}
			new[p1+1]='\0';
	//		printf(" Inital: %s ",new);
			tmp=new[i];
			new[i]=c;
			for(k=i+1;k<len;k++)
			{
				new[k+1]=s[k];
			}
			if(i!=len)
			new[i+1]=tmp;
	//		printf("Final:%s\n",new);
			if(palindrome(new,len+1))
			{
				printf("%s\n",new);
				return 0;
			}
		}
	}
	printf("NA\n");
}
