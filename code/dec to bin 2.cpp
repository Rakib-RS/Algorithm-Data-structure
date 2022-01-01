#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n,j=2147483648;
   int a[32],k=0;
    scanf("%lld",&n);
    while(j){
        if((n&j)==0){
            cout<<"0";
            a[k++]=0;
        }
        else
        {cout<<"1";
            a[k++]=1;
        }
        j=j>>1;
        //cout<<n<<endl;
    }
    cout<<endl;
    for(k=0;k<32;k++)
        cout<<a[k];

    return 0;
}
