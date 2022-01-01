#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,q,l,r,s,in,m,a,mx,tc=1,i;
    scanf("%d",&t);
    vector<int>vc;
    map<int,int>mp;
    while(t--){
            printf("Case #%d:\n",tc++);
        scanf("%d%d",&n,&q);
        for(i=1;i<=n;i++){
            scanf("%d",&a);
            vc.push_back(a);
            mp[a]=i;
        }
        while(q--){
            scanf("%d %d",&l,&r);
            mx=0;s=0;in=l;
            mx=*(max_element(vc.begin()+l-1,vc.end()-(r-l)+1));
            in=mp[mx];
            printf("%d %d\n",mx,in);
        }
        vc.clear();
        mp.clear();
    }

    return 0;
}
