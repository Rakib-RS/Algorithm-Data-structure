#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<long long int>vc;
    vector<long long int>::iterator itv,it1;
   long long int n,k,i,j,t,tc=1,d;
   scanf("%lld",&t);
   vc.push_back(0);
   while(t--){
        scanf("%lld%lld",&n,&k);
        for(i=1;i<=n;i++)
            vc.push_back(i);
            d=0;
        while(vc.size()!=2){
            if(vc.size()-1<k){
                itv=vc.begin()+(k-vc.size()-d-1);

            }
            else{
                itv=vc.begin()+n-d;
            }
        }
   }
    return 0;
}
