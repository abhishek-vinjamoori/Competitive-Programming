#include<stdio.h>
#include<math.h>
typedef long long int ll;
int x=0;
void get_left(ll q)
{
	if(q<=1)
	{
		return;
	}
	x++;
	get_left(q/2);
}
int main()
{
	int tes;
	int que,yy,rh,lh;
	scanf("%d",&tes);
	while(tes--)
	{
		scanf("%d",&que);
		x=0;
		get_left(que);
		lh=x;
		int xx=pow(2,lh+1);
		yy=xx/4;
		if(xx-yy-1<que)
		{
			rh=lh;
		}
		else
		{
			rh=lh-1;
		}
		if(lh+rh>0)
		{
		printf("%d\n",lh+rh);
		}
		else
		{
			printf("0\n");
		}
	}
	return 0;
}
