#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
void reverse(char* s)
{
	if(*s!= '\0')
	{
		reverse(s+1);
		printf("%c",*s);
	}
	return;
}

int main()
{
	char s1[1000];
	char s2[1000];
	scanf("%s%s",s1,s2);
	//reverse(s1);
	printf("\n");
	int n=strlen(s1);
	int m=strlen(s2);
	for(int i=0;i<=n-m;i++)
	{
		int fl=0;
		for(int j=0;j<m;j++)
		{
			if(s1[i+j]!=s2[j])
			{
				fl=1;
				break;
			}
		}
		if(!fl)
		{
			cout << "Pattern found at " << i << endl;
		}
	}
}
