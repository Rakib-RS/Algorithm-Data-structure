#include<bits/stdc++.h>
using namespace std;
long long int rev(long long int n){
    long long int s=0;
    while(n){
        s=s*10+n%10;
        n/=10;
    }
    return s;

}
int main(){
    long long int n,i,j,s,t,c;
    cin>>t;
    while(t--){
        cin>>n;c=0;s=n;
        j=0;
        while(1){
            j=rev(s);
            if(j!=s){
                s+=j;
                c++;
            }
            else break;
        }
        cout<<c<<" "<<s<<endl;
    }

    return 0;
}
