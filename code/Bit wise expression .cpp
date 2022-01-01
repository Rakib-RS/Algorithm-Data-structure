#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,l,r,i,j,u,k;
    double m;
    while(cin>>n){
        cin>>l>>u;
        k=n;j=0;
        cout<<k<<endl;
        long long int a[64]={0};
        while(k){
            if((k&1)==0)
                a[j++]=0;
            else a[j++]=1;
            k=k>>1;
        }
        reverse(a,a+j);
        m=0;
        for(i=0;i<j;i++){
            if(a[i]==0)
                m+=pow(2,i);
        }
        if(m<l){
            for()
        }

    }
    return 0;
}
