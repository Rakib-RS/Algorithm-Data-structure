#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,w,t,tc=1,i,j,c,s,k,d;
    vector<long long int>vc;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld",&n,&w);c=1;s=0;
        for(i=1;i<=n;i++){
            scanf("%lld",&j);
            vc.push_back(j);
            if(j<=w) c++;
            s+=j;
        }
        sort(vc.begin(),vc.end());k=0;
        for(i=0;i<n;i++){
            s=0;
            for(j=i;j<n-1;j++){
                s+=vc[j];
                d=w-s;
                if(d>=vc[n-1]) k=n+1;
                else{
                if(d<0)d=0;
                vector<long long int>::iterator h;
                h=upper_bound(vc.begin(),vc.end(),d);
                k=h-vc.begin();
                }
                k=j-1;
                if(k>0)
                    c+=k;
            }
        }
        printf("Case %lld: %lld\n",tc++,c);
        //vc.clear();
    }
    return 0;
}
