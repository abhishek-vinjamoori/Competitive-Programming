#include<stdio.h>
long long int fi[1000000];
void fib()
{
	int i;
	int a,b,c;
	a=1;
	b=1;
	for(i=0;i<44;i++)
	{
		c=a+b;
		a=b;
		b=c;
		fi[i]=c;
	}

}
int main()
{
	long long int n;
	int i;
	scanf("%Ld",&n);
	fib();
	for(i=0;i<44;i++)
	{
	//	printf("%Ld\n",fi[i]);
		if(fi[i]==n)
		{
			printf("%d\n",i+3);
			return 0;
		} 
	}
	printf("not Fibonacci\n");
	return 0;
}
