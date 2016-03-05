#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100005],s2[100005];
	scanf("%s%s",s1,s2);
	int i,j,k,l;
	char s3[100005];
//	printf("%s\t%s",s1,s2);
	int len=strlen(s1);
	l=0;
	for(i=0;i<len;i++)
	{
		if(s1[i]!=s2[i]&&l==0)
		{
			s3[i]=s1[i];
			l=1;
		}
		else if(s1[i]!=s2[i]&&l==1)
		{
			s3[i]=s2[i];
			l=0;
		}
		else
		{
			s3[i]=s1[i];
		}
	}
	s3[len]='\0';
	if(l)
	{
		printf("impossible\n");
		return 0;
	}
	else
	{
		printf("%s\n",s3);
	}
	return 0;
}
