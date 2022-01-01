#include<bits/stdc++.h>
using namespace std;
vector<int>edge[1000],level,lev1;
vector<bool>visit;
void bfs(int u);
int main(){
    int t,tc=1,n,r,u,v,s,d,mx,i;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        scanf("%d",&r);
        for(i=0;i<=1000;i++)
            edge[i].clear();
        level.clear();
        lev1.clear();
        while(r--){
            scanf("%d%d",&u,&v);
            edge[u].push_back(v);
            edge[v].push_back(u);
        }
        scanf("%d%d",&s,&d);
        bfs(s);
        lev1=level;
        bfs(d);
        mx=0;
        for(i=0;i<lev1.size();i++){
            level[i]=level[i]+lev1[i];
            if(mx<level[i])
                mx=level[i];
        }
        printf("Case %d: %d\n",tc++,mx);
    }
    return 0;
}
void bfs(int u){
    visit.assign(1000,false);
    level.assign(1000,0);
    queue<int> q;
    q.push(u);
    visit[u] = true;
    int k;
    while (!q.empty()) {

        int f = q.front();
        q.pop();
        for ( int i = 0; i <edge[f].size(); i++) {
                k=edge[f][i];
            if (!visit[k]) {
                q.push(k);
                visit[k] = true;
                level[k]=level[f]+1;
            }
        }
    }
}
