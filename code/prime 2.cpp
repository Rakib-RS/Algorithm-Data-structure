#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int n,i,j,s=0,d,k;
    for(i=1;i<=100;i++){
            d=1;
        for(k=2;k<=sqrt(i);k++){
            if(i%k==0){
                d=0;break;
            }
        }
        if(d){
            s++;
        }
        cout<<s<<",";
    }

}
