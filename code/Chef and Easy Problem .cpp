#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,q,i,l,r,s,m,d;
    vector<long long int>vc;
    map<int,int>mp;
    int k=0;
    cin>>n>>q;
    for(i=1;i<=n;i++){
            scanf("%lld",&m);
        vc.push_back(m);
    }
    while(q--){
        scanf("%lld%lld",&l,&r);
        for(i=l-1;i<r;i++){
            m=vc[i];
            d=2147483648;k=0;
            while(d){
                if((m&d)==0){
                    k++;
                }
                else mp[k++]++;
                d=d>>1;
            }
        }
        i=0;
        double sub=0,total=0;
        for(k=31;k>=0;k--){
            if(mp[k]>1){
                sub=(pow(2.0,i));
                total+=sub;
            }
            i++;
        }
        mp.clear();
        s=2147483647-total;
        cout<<s<<endl;
    }
    return 0;
}
