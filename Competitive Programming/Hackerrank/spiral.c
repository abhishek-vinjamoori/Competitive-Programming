#include<stdio.h>
int main()
{
	int m,n,i,j,k,endx,endy,startx,starty;
	scanf("%d%d",&m,&n);
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	j=0;
	i=0;
	endx=n;
	startx=0;
	endy=m;
	starty=1;
	int state=0;
	int ss=m*n;
	while(ss--)
	{
//		printf("i:%d\tj:%d\t%d\n",i,j,state);
		printf("%d ",a[i][j]);
		if(state==0)
		j++;
		else if(state==1)
		i++;
		else if(state==2)
		j--;
		else if(state==3)
		i--;
		if(j==(endx-1)&&state==0)
		{
			endx--;
			state=1;	
		}
		else if(i==(endy-1)&&state==1)
		{	
			endy--;
			state=2;
		}
		else if(j==startx&&state==2)
		{
			startx++;
			state=3;
		}
		else if(i==starty&&state==3)
		{
			starty++;
			state=0;
		}
	/*	if(startx>=endx||starty>=endy)
		{
			break;
		} */
	}
	printf("\n");
	return 0;
}
