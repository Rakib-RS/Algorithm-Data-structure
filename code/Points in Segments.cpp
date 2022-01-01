#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,n,q,tc=1,t,c,ar[200000],l,h,c1,c2,mid,i,j;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld",&n,&q);
        printf("Case %lld:\n",tc);tc++;
        for(i=1;i<=n;i++){
            scanf("%lld",&ar[i]);
        }
        while(q--){
            scanf("%lld%lld",&a,&b);j=0;
            l=1;h=n;
            while(h>=l){
                mid=(l+h)/2;
                if(ar[mid]==a){
                        j=1;
                    break;
                }
                if(ar[mid+1]==a)
                    l=mid+1;

                if(ar[mid]>a){
                    h=mid-1;
                }
                else {
                    l=mid+1;
                }

            }
            if(j)
            c1=mid;
            else c1=l;
            h=n;l=1;j=0;
            while(h>=l){
                mid=(l+h)/2;
                if(ar[mid]==b){
                    j=1;break;
                }
                if(ar[mid+1]==b)l=mid+1;
                if(ar[mid]<b){
                    l=mid+1;
                }
                else {
                    h=mid-1;
                }

            }
            if(j)c2=mid;
            else c2=h;
            c=c2-c1+1;
            printf("%lld\n",c);
        }
    }

    return 0;
}
