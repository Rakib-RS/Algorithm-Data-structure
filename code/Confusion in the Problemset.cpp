#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,tc=1,d,n,a,b,l,i,m;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);m=n;
        map<int,int>mp;
        while(n--){
            scanf("%d",&a);
            mp[a]++;
        }
        b=0;l=m-1;d=1;
        for(i=1;i<=m;i++){
            if(mp[b]>0){
                mp[b]--;
            }
            else if(mp[l]>0){
                mp[l]--;
            }
            else {
                d=0;break;
            }
            b++;
            l--;
        }
        if(d)
            printf("Case %d: yes\n",tc);
        else printf("Case %d: no\n",tc);
        tc++;
    }
    return 0;
}
