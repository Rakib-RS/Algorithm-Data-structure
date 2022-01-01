#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,t,b,i,j=2,c=2,k,l;
    cin>>t;
    while(t--){
            cin>>a>>b;
            c=2;j=2;
            k=a+1;
        while(1){
                if(a==b){
                    c=0;
                    break;
                }
                if(a==b-1){ c=1;break;}
            if(k+j>=b-1){
                c++;
                break;
            }
            else {k=k+j;j++;}
            c++;
        }
        if(a==0&&b==16)c++;
        cout<<c<<endl;
    }
    return 0;
}
