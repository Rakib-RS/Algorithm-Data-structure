#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,n,i,j,k;
    while(1){
        cin>>a;
        if(a==0) break;
        k=0;
        int s[1000];i=0;
        while(a){
            j=a%2;
            s[i++]=j;
            if(j==1)k++;
            a/=2;
        }
        cout<<"The parity of ";
        reverse(s,s+i);
        for(n=0;n<i;n++)
            cout<<s[n];
        cout<<" is "<<k<<" (mod 2)."<<endl;
    }

    return 0;
}
