#include<stdio.h>
typedef long long int ll;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        ll i,j,k;
        ll p,q,r;
        scanf("%Ld",&p);
        ll a[p];
        for(i=0;i<p;i++)
        {
            scanf("%Ld",&a[i]);
        }
        scanf("%Ld",&q);
        ll b[q];
        for(i=0;i<q;i++)
        {
            scanf("%Ld",&b[i]);
        }
        scanf("%Ld",&r);
        ll c[r];
        for(i=0;i<r;i++)
        {
            scanf("%Ld",&c[i]);
        }
        ll ind=0;
        i=j=0;
        ll pre[100000];
        while(i<p&&j<q)
        {
            if(a[i]<=b[j])
            {
                pre[ind++]=j;
                i++;
            }
            else
            {
                j++;
            }
        }
       /* for(i=0;i<ind;i++)
            prllf("%d ",pre[i]); */
        ll end=ind-1;
        j=k=ind=0;
        ll count=0;
        ll state=0;
        while(j<q&&k<r)
        {
            if(ind==end+1)
            {
                    state=1;
                    j=ind;
            }
            if(b[pre[ind]]<=c[k]&&state==0)
            {
                ind++;
            ll temp=r-k;
           // prllf("Temp:%d ",temp);
                count+=temp;
            }
            else
            {
                k++;
            }
            if(b[j]<=c[k]&&state==1)
            {
                j++;
                ll temp=r-k;
             //   prllf("Temp:%d ",temp);
                count+=temp;
            }
            else if(state==1)
            {
                k++;
            }

        }
        printf("%Ld\n",count);
    }

}
