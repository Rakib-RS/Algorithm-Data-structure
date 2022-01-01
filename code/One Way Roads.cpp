#include<bits/stdc++.h>
using namespace std;
vector<int>edge[200],cost[200];
vector<bool>l,r;
int sum=0,n;
void bfs(int u);
int main(){
    int t,tc=1,i,j,u,v,c,lc,rc,mn;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        l.assign(200,false);
        r.assign(200,false);
        lc=rc=0;
        for(i=1;i<=n;i++){
            scanf("%d%d%d",&u,&v,&c);
            if(!l[u]&&!r[v]){
                l[u]=r[v]=true;
                lc+=c;
            }
            else{
                l[v]=r[u]=true;
                rc+=c;
            }

        }
        mn=min(lc,rc);
        printf("Case %d: %d\n",tc++,mn);
    }
    return 0;
}
