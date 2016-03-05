#include<stdio.h>
char samesign(long long int,long long int);
int main(){
	int n,i,ans,t1,t2,t3,t4;
	long long int a,b,c,x1,y1,x2,y2;
	ans=0;
	scanf("%I64d %I64d %I64d %I64d",&x1,&y1,&x2,&y2);
//	scanf("%ld %ld %ld %ld",&t1,&t2,&t3,&t4);
	// x1=(long long int)t1;y1=(long long int)t2;x2=(long long int)t3;y2=(long long int)t4;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%I64d %I64d %I64d",&a,&b,&c);
		// scanf("%ld %ld %ld",&t1,&t2,&t3);
		// a=(long long int)t1;b=(long long int)t2;c=(long long int)t3;
		if(!samesign(a*x1+b*y1+c,a*x2+b*y2+c)){
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}

char samesign(long long int n1,long long int n2){
	if((n1>0&&n2>0)||(n1<0&&n2<0)){
		return 1;
	}
	else{
		return 0;
	}
}
