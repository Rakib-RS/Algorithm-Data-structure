#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a=0,b=0,c=0,n,x,d=0,m,p=10000,q=5000,r=1000,s=0;
    cin>>x>>n;m=n;
        if(d!=x){
            a=m/p;
            m=m%p;
            b=m/q;
            m=m%q;
            c=m/r;
            m=m%r;
            if(m==0){
                d=a+b+c;
            }
            if(d!=x) {
                m=n;
                a=m/p;
            m=m%p;
            c=m/r;
            m=m%r;
            if(m==0){
                    b=0;
                d=a+c;
            }
            else m=n;
            }
        }
        if(d!=x){
                a=0;b=0;c=0;
            b=m/q;
            m=m%q;
            c=m/r;
            m=m%r;
            if(m==0){
                d=a+b+c;
            }
            else m=n;
        }
        if(d!=x){
            a=0;b=0;c=0;
            c=m/r;
            m=m%r;
            if(m==0){
                d=a+b+c;
            }
            else m=n;
        }

        if(d==x){
            printf("%lld %lld %lld\n",a,b,c);
        }
        else printf("-1 -1 -1\n");

    return 0;
}
