#include<stdio.h>
#include<string.h>
int main()
{
	char str[100000];
	int i,j,k;
	int even=0;
	int odd=0;
	scanf("%s",str);
	int len=strlen(str);
	for(i=0;i<len;i++)
	{
		for(j=i;j<len;j++)
		{
			if(str[i]==str[j])
			{
				if((j-i)%2==0)
				{
					even++;
				}
				else
				{
					odd++;
				}
			}
		}
	}
	printf("%d %d\n",odd,even);
	return 0;
}
