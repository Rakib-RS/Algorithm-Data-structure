#include<bits/stdc++.h>
using namespace std;
int prime(long long int a){
        int s,j=1;
        s=sqrt(a);
        for(int i=2;i<=s;i++){
            if(a%i==0){
                j=0;
                break;
            }
        }
        return j;

}
int main(){
    long long int a,n,d,r,c,i,ar[10000],j,k;
    while(1){
        cin>>n;
        if(n==0)break;j=0;
        a=sqrt(n);c=0;
        for(i=2;i<=a;i++){
            if(n%i==0){
                d=n/i;
                if(prime(i)){
                        ar[j++]=i;}
                if(prime(d)){
                        ar[j++]=d;
                }
            }
        }
        sort(ar,ar+j);
        if(j>=1)c=1;
        for(k=1;k<j;k++){
                if(ar[k]!=ar[k-1])
                    c++;
        }
        printf("%lld : %lld\n",n,c);
    }


    return 0;
}
