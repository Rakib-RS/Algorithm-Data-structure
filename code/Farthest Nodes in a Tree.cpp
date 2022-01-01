#include<bits/stdc++.h>
using namespace std;
void bfs(int u);
int mx=-1,p;
vector<int>edge[30004],cost[30004],level;
vector<bool>visit;
int main(){
    int t,test=1,u,v,c,i,j,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        mx=0;
        for(i=0;i<30004;i++){
            edge[i].clear();
            cost[i].clear();
        }
        visit.clear();
        level.clear();
        for(i=1;i<n;i++){
            scanf("%d%d%d",&u,&v,&c);
            edge[u].push_back(v);
            edge[v].push_back(u);
            cost[u].push_back(c);
            cost[v].push_back(c);
        }
            bfs(0);
            mx=-1;
            bfs(p);
        printf("Case %d: %d\n",test++,mx);

    }

    return 0;
}
void bfs(int u){
    visit.assign(30004,false);
    level.assign(30004,0);
    visit[u]=true;
    int f,i,j;
    queue<int>q;
    q.push(u);
    level[u]=0;
    visit[u]=true;
    while(!q.empty()){
        f=q.front();
        q.pop();
        if(level[f]>mx){
            mx=level[f];
            p=f;
        }
        for(i=0;i<edge[f].size();i++){
            j=edge[f][i];
            if(!visit[j]&&level[j]<level[f]+cost[f][i]){
                level[j]=level[f]+cost[f][i];
                visit[j]=true;
                q.push(j);
            }
        }
    }
}
