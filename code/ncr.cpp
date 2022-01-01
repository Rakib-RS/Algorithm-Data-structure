#include<bits/stdc++.h>
using namespace std;
long long int ncr(long int n,long int r,long int p){
    if(n==r)
        return 1;
    if(r==0) return 1;
    return ncr(n-1,r-1,p)+ncr(n-1,r,p);

}
int main(){
   long long  int n,r,p;
    scanf("%lld%lld%lld",&n,&r,&p);
    cout<<ncr(n,r,p)<<endl;
    return 0;
}
