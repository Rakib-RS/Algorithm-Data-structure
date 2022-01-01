#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c,d=1,s=0,s1;
    cin>>a>>b>>c;
    while(a){
        if(a*2<=b&&a*4<=c){
            s=a+a*2+a*4;break;
            ;
        }

        a--;
    }
    cout<<s<<endl;

}
