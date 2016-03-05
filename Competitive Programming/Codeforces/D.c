#include<stdio.h>
#include<stdlib.h>
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
using namespace std;

long long MOD = (long long)1000000007;
int powmod(int x, int y)
{
    long long int temp;
    if( y == 0)
        return 1;
    temp = powmod(x, y/2);
    if (y%2 == 0)
        return (temp*temp)%MOD;
    else
        return (((x*temp)%MOD)*temp)%MOD;
}

int cnt[200005];


void swap(int *a,int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

int main(){
	int n,i,j;
	long long ans=1,tot,x,y;

	for(i=0;i<200005;i++)cnt[i]=0;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> j;
		cnt[j]++;
	}
	for(i=2;i<200005;i++){
		if(cnt[i]%2==1)
		{
			break;
		}
	}
	if(i==200005)
	{
		tot=1;
		for(i=0;i<200005;i++)
		{
			if(cnt[i]){
				tot=tot*(cnt[i]+1);
				while(tot>=MOD){
					x=tot%MOD;
					tot=tot/MOD;
					tot+=x;
				}
			}
		}
		for(i=2;i<200005;i++){
			if(cnt[i]){
				y=cnt[i]>>1;
				y*=tot;
				while(y>=MOD){
					x=y%MOD;
					y=y/MOD;
					y+=x;
				}
				ans=(ans*powmod(i,(int)y))%MOD;
			}
		}
		cout << ans;
	}
	else
	{
		n=0;
		tot=1;
		for(i=2;i<200005;i++){
			if(cnt[i]){
				if(n==0&&(cnt[i]&1)){
					tot=tot*((cnt[i]+1)/2);
					n=1;
				}
				else
					tot=tot*(cnt[i]+1);			
				while(tot>=MOD){
					x=tot%MOD;
					tot=tot/MOD;
					tot+=x;
				}
			}
		}
		for(i=2;i<200005;i++){
			if(cnt[i]){
				y=cnt[i];
				y*=tot;
				while(y>=MOD){
					x=y%MOD;
					y=y/MOD;
					y+=x;
				}
				ans=(ans*powmod(i,(int)y))%MOD;
			}
		}
		cout << ans;
	}
	return 0;
}