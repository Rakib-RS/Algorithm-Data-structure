#include<bits/stdc++.h>
using namespace std;
int a[5000];
int main(){
   long long  int t,q,i,j,c,x,l,r,p,c0;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&q);
        c0=0;
        while(q--){
            scanf("%lld",&c);
            j=1;
            if(c==3){
                scanf("%lld%lld",&l,&r);
                p=r+l-p;
                j=0;
            }
            else scanf("%lld",&x);
            if(c==5){
                if(x==p||(c0==4&&x>=p))
                    printf("Yes\n");
                else printf("No\n");
            }
            else {
                if(j)
                    p=x;
                c0=c;
                if(c==4)
                    p++;
            }


        }

    }

    return 0;
}
