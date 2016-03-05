#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,len;
	char s[1000010],*gen[100010];
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		len=strlen(s);
		gen[i]=(char*)malloc(sizeof(char)*(len+1));
		strcpy(gen[i],s);
		gen[i][len]='\0';
	}
	int c=0;
	int zer=0;
	int found=-1;
	for(i=0;i<n;i++)
	{
		if(gen[i][0]=='0')
		{
			zer=1;
			break;
		}
		else if(gen[i][0]!='1')
		{
			found=i;
			continue;
		}
		else
		{
			for(j=1;gen[i][j]!='\0';j++)
			{
				if(gen[i][j]!='0')
				{
					found=i;
					break;
				}
			}
			if(found==i)
			{
				continue;
			}
			c+=(j-1);
			//printf("%s\t%d\n",gen[i],j-1);
		}
	}
	if(zer)
	{
		printf("0\n");
		return 0;
	}
	if(found!=-1)
	printf("%s",gen[found]);
	else
		printf("1");
	for(i=0;i<c;i++)
	{
		printf("0");
	}
	printf("\n");
	return 0;

}
