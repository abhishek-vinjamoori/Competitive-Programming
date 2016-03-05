#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d",&a,&b);
	c=a;
	d=a%b;
	int k;
	while(a>=b)
	{
		k=a;
		a/=b;
		c+=a;
		if(k>=b)
		{
			a+=k%b;
		} 
	/*	d+=a%b;
		printf("a is:%d\t Remainder:%d\t TOtal:%d\n",a,a%b,c);
		if(a==0)
		{
			a=d;
			d=0;
		} */
		
	}
//	printf("%d ",d);
	printf("%d\n",c);
	return 0;
}
