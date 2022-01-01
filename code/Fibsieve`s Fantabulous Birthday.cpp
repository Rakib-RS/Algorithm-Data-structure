#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n,s1,s2,c,r,i,test=1,j=0;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        s1=sqrt(n);
        if(s1%2==0) {
            c=s1;r=1;
        }
        else {
            r=s1;
            c=1;
        }
        i=s1*s1;
        if(i==n) j=1;
       else if(s1%2!=0){
                j=s1+1;
            if(n<=(i+j)){
                    r++;c+=(n-i-1);
                }
                else {
                        s2=(s1+1);
                        s2=s2*s2;
                    c=j;r=(s2-n+1);
                }
        }
        else {
                j=s1+1;
                if(n<=(i+j)){
                    c++;r=(n-i);
                }
                else {
                        s2=s1+1;s2=s2*s2;
                    r=j;c=(s2-n+1);
                }
        }
        printf("Case %lld: %lld %lld\n",test,c,r);
        test++;
    }
    return 0;
}
