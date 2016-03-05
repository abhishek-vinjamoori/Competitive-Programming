#include<stdio.h>
typedef long long int lon;
void anombomb(lon hean[],lon o,lon up,lon exp);
int main()
{
	lon l,k;
	scanf("%lld",&k);
	while(k>0)
	{
		lon exp,up,m,o,l,po,ko,ans=0;
		scanf("%lld%lld%lld%lld",&up,&exp,&o,&m);
		m=m%o;
		printf("%lld\n",m);
		lon hean[40];
		for(l=0;l<o;l++)
			hean[l]=0;
		anombomb(hean,o,up,exp);
		for(l=0;l<o;l++)
		{
			printf("%lld  ",hean[l]);
		}
		printf("\n");
		for(l=0;l<o;l++)
		{
			for(po=0;po<o;po++)
			{
				for(ko=0;ko<o;ko++)

				{
					if(((po+ko+l)%o==m%o)&&((hean[po]*hean[l]*hean[ko])!=0))
					{
					printf("%lld %lld %lld\n",l,po,ko);
						ans=ans+hean[po]*hean[ko]*hean[l];
					}
				}
			}
		}
		printf("\n");
		printf("%lld\n",ans);
		k--;
	}
	return 0;
}	

void anombomb(lon hean[],lon o,lon up,lon exp)
{
	lon l;
	for(l=0;l<=up;l++)
	{
		lon aos=1;
		while(exp>0)
		{
			if(exp&1==1)
				aos=(aos*l)%o;
			l=l*l;
			exp=exp>>1;
		}
		hean[aos]++;
	}
	return ;
}


