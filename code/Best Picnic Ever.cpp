#include<bits/stdc++.h>
using namespace std;
vector<int>edge[10005],level;
vector<bool>vis;
int c=0;
void bfs(int u);
int main(){
    int k,n,m,u,v,i,j,t,tc=1,p[110],mx;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&k,&n,&m);
        level.assign(10000,0);
        for(i=0;i<k;i++)
            scanf("%d",&p[i]);
        for(i=0;i<10005;i++)
            edge[i].clear();
        for(i=0;i<m;i++){
            scanf("%d%d",&u,&v);
            edge[u].push_back(v);
        }
        mx=0;
        for(i=0;i<k;i++){
            bfs(p[i]);
        }
        for(i=1;i<=n;i++){
            if(level[i]==k)
                mx++;
        }
        printf("Case %d: %d\n",tc++,mx);
    }
    return 0;
}
void bfs(int u)
{
    queue<int> q;
    vis.assign(10000,false);
    q.push(u);
    vis[u] = true;
    int k;
    level[u]=level[u]+1;
    while (!q.empty()) {

        int f = q.front();
        q.pop();
        for ( int i = 0; i <edge[f].size(); i++) {
                k=edge[f][i];
            if (!vis[k]) {
                q.push(k);
                vis[k] = true;
                level[k]=level[k]+1;
            }
        }
    }
}
