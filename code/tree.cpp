#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<queue>
using namespace std;
vector<int>edge[10010];
int cost[1010];
vector<bool>visit;
int mx;
char s[20];
void bfs(int u,int v){
    visit.assign(10005,false);
    queue<int> q;
    q.push(u);
    visit[u] = true;
    int k;
    while (!q.empty()) {
        int f = q.front();
        q.pop();
        for ( int i = 0; i <edge[f].size(); i++) {
                k=edge[f][i];
                if(cost[f]>mx)mx=cost[f];
                if(strcmp(s,"NEGATE")==0)
                    cost[f]=-cost[f];
            if (!visit[k]) {
                q.push(k);
                visit[k] = true;
            }
            if(visit[v])
                break;
        }
        if(visit[v])
                break;
    }
}

int main(){
    int t,n,i,j,u,v,w;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        n--;
        for(i=0;i<10005;i++){
            edge[i].clear();
        }
        while(n--){
            scanf("%d%d%d",&u,&v,&w);
            edge[u].push_back(v);
            cost[u]=w;
        }
        while(1){
            getchar();
            scanf("%s",&s);
            if(strcmp(s,"DONE")==0){
                break;
            }
            else if(strcmp(s,"QUERY")==0){
                scanf("%d%d",&u,&v);
                bfs(u,v);
                printf("%d\n",mx);
            }
            else if(strcmp(s,"NEGATE")==0){
                scanf("%d%d",&u,&v);
                bfs(u,v);
            }
            else {
                scanf("%d%d",&u,&v);
                cost[u]=v;
            }
        }

    }
    return 0;
}
