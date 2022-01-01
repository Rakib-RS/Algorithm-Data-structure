#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int m,x,v,i,j,t,b;
    while(cin>>m&&cin>>x){
        j=(m*x)/100;
        t=(m+j)*2;
        //cout<<m<<endl;
        cout<<t<<endl;
        for(i=t;;i--){
            j=(i*x)/100;
            v=i-j;
            //cout<<v<<endl;
            if(v<m)
                break;
            b=v;
        }
        cout<<i<<endl;
    }
    return 0;
}
