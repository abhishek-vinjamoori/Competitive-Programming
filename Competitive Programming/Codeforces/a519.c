#include<stdio.h>
int main()
{
	char chess[8][8];
	int i,j;
	int b=0;
	int w=0;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			scanf("%c",&chess[i][j]);
			char c=chess[i][j];
			if(c=='q')
			{
				w+=9;
			}
			else if(c=='r')
			{
				w+=5;
			}
			else if(c=='b')
			{
				w+=3;
			}
			else if(c=='n')
			{
				w+=3;
			}
			else if(c=='p')
			{
				w+=1;
			}
			else if(c=='Q')
			{
				b+=9;
			}
			else if(c=='R')
			{
				b+=5;
			}
			else if(c=='B')
			{
				b+=3;

			}
			else if(c=='N')
			{
				b+=3;

			}
			else if(c=='P')
			{
				b+=1;

			}
		}
		getchar();
	}
	if(b>w)
	{
		printf("White\n");
	}
	else if(w>b)
	{
		printf("Black\n");
	}
	else
	{
		printf("Draw\n");
	}
}
