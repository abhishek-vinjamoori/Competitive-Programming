#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	scanf("%s",s);
	int i,j;
	for(i=0,j=1;s[i+1]!='\0'&&i<strlen(s)-1;j++)
	{
		if(s[i]!=s[j])
		{
			s[i+1]=s[j];
			i++;
		}
	}
	printf("%d\n",strlen(s));
	printf("%s\n",s);
}

