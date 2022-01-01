#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c=01,n,i,m=01;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a;
        if(i==1)b=a;
        if(i>1){
            if(a>b)
                c++;
            m=max(m,c);
                if(a<=b){
                    c=1;
                }
            b=a;
        }
    }
    cout<<m<<endl;

    return 0;
}
