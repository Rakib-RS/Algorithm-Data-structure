#include<bits/stdc++.h>
using namespace std;
int prime(long long int a){
        long long int s,i,k=1;
        s=sqrt(a);
        for(i=2;i<=s;i++){
            if(a%i==0){
                k=0;
                break;
            }

        }
        return k;

}
int main(){
    long long int a,b,i,j,k,t,n,c,s,m;
    cin>>t;
    while(t--){
        cin>>n;
        c=0,m=0;;
        for(i=30;;i++){
                s=sqrt(i);c=0;
            if(m==n){
                break;
            }

            for(j=2;j<=s;j++){
                if(i%j==0){
                    a=i/j;
                    if(prime(a)) c++;
                    if(a!=j){
                        if(prime(j)) c++;
                    }
                }
                if(c==3){
                    m++;
                    break;
                }
            }

        }
        cout<<i-1<<endl;

    }

    return 0;
}
