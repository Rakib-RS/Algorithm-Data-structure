#include<bits/stdc++.h>
using namespace std;
int main(){
     int t,tc=1,i,j,n,c,a,s,d,c1,c2,c3;
    vector<int>vc;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d",&a);
            vc.push_back(a);
        }
        sort(vc.begin(),vc.end());s=20;
        c=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                s=vc[i]+vc[j];
                d=vc[j]-vc[i];
                vector<int>::iterator h2,h1;
                h2=lower_bound(vc.begin(),vc.end(),s);
                c2=h2-vc.begin();
                c1=h1-vc.begin();
                c3=c2-j-1;
                if(c3<0)c3=0;
                c+=c3;
            }
        }
        vc.clear();

        printf("Case %d: %d\n",tc,c);
        tc++;
    }
    return 0;
}
