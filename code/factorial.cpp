#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a[100],b,i,j,t,te=0,sum;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&b);j=1;sum=1,i=0;
        while(j<=b){
            sum*=j;
            a[i]=j;
            j++;
           // if(sum>=b)
                //break;
        }
        cout<<sum<<endl;
    }


}

