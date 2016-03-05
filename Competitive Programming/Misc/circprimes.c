#include<stdio.h>
#include<iostream>
int a[100000]={0};
void sieve()
{
	for(int i=2;i<1000000;i++)
	{
		for(int j=2;i*j<1000000;j++)
		{
			a[i*j]=1;
		}
	}
}
int main()
{

}
