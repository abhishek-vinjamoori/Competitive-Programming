#include<stdio.h>
#include<stdlib.h>

int powmod(int,int);

int cnt[200005];
long long MOD;

void swap(int *a,int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

int main(){
	int n,i,j;
	long long ans=1,tot,x,y;
	MOD=(long long)1000000007;
	for(i=0;i<200005;i++)cnt[i]=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&j);
		cnt[j]++;
	}
	for(i=2;i<200005;i++){
		if(cnt[i]&1){
			break;
		}
	}
	if(i==200005){
		tot=1;
		for(i=0;i<200005;i++){
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
		printf("%d\n",(int)ans);
	}
	else{
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
		printf("%d\n",(int)ans);
	}
	return 0;
}

int powmod(int base,int pow){
	long long ret=1;
	long long b=base;
	if(base==0&&pow!=0)return 0;
	//	printf("pow %d %d =",base,pow);
	while(pow){
		if(pow&1)
			ret=(ret*b)%MOD;
		pow>>=1;
		b=(b*b)%MOD;
	}
	//	printf("%d\n",(int)ret);
	return (int)ret;
}
