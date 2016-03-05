#include<stdio.h>
typedef long long int ll;
ll upl,m,N;
/*ll power(ll i,ll d)
  {
  if(d==0)
  {
  return 1;
  }
  ll tmp=power(i,d/2);
  if(d%2==0)
  {
  return ((tmp%N)*(tmp%N))%N;
  }
  else
  {
  return ((i%N)*(tmp%N)*(tmp%N))%N;
  }
  } */
ll power(ll i,ll d)
{
	ll res=1;
	while(d>0)
	{
		if(d%2==0)
		{
			i=i%N;
		}
		else
		{
			res=(res*i)%N;
		}
		i=((i%N)*(i%N))%N;
		d=d/2;
	}
	return res;
}
int main()
{
	int test;
	scanf("%d",&test);
	//	ll tmp=power(test,cut);
	//	printf("%Ld ",tmp);
	while(test--)
	{
		ll d;
		ll A[100]={0};
		//		ll Fin1=0,Fin2=0,Fin3=0;
		ll A1,A2,A3,i,j,k;
		scanf("%Ld%Ld%Ld%Ld",&upl,&d,&m,&N);
		//		printf("%Ld%Ld%Ld%lld",upl,d,m,N);
		ll tmp;
		for(i=0;i<=upl;i++)
		{
	//		tmp=power(i,d);
			//			printf("Tmp:%Ld ",tmp);
			A[tmp]++;
			A[tmp]+=(upl/N)-1;
		}  
		/*		for(A1=0;A1<=N&&A1<=upl;A1++)
				{
				for(A2=0;A2<=N&&A1<=upl;A2++)
				{
				for(A3=0;A3<=N&&A1<=upl;A3++)
				{
				if(power(A1,d)+power(A2,d)+power(A3,d)==m%N)
				{
				A[Fin1++]=A1;
				B[Fin2++]=A2;
				C[Fin3++]=A3;
				} 
		//	if()
		}
		}	

		for(i=0;i<Fin1;i++)
		{
		printf("%Ld %Ld %Ld\n",A[i],B[i],C[i]);
		} 
		printf("%Ld ",A[i]);
		} */
			for(i=0;i<N;i++)
			{
			printf("%Ld ",A[i]);
			} 
		ll count=0;
		for(i=0;i<N;i++)
		{
			if(A[i]==0)
			{
				continue;
			}
			for(j=0;j<N;j++)
			{
				if(A[j]==0)
				{
					continue;
				}
				for(k=0;k<N;k++)
				{
					if(A[k]==0)
					{
						continue;
					}
			//		if(A[i]!=0&&A[j]!=0&&A[k]!=0)
			//		{
						if((i+j+k)%N==m%N)
						{
							count+=(A[i]*A[j]*A[k])%10000000007;
						}
			//		}
				}
			}
		}
		printf("%Ld\n",count%10000000007);
	}
	return 0;
}
