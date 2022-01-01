#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,i,j,c=0;
    cin>>a>>b;
    while(1){
        if(a+b<3||(a==0||b==0)) break;
        if(a<=b){
            a--;
            b-=2;c++;
        }
        if(a+b<3||(a==0||b==0)) break;
        if(a>=b){
            a-=2;
            b--;c++;
        }
    }

    cout<<c<<endl;


    return 0;
}
