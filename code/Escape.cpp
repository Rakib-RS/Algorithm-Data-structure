#include<bits/stdc++.h>
using namespace std;
vector<int>edge[20000];
vector<char>check;
int city;
void bfs(int u);
int main(){
    int t,u,v,i,j,n,m;
    scanf("%d",&t);
    while(t--){
        for(i=0;i<=200;i++)
            edge[i].clear();
        check.clear();
        check.assign(200,'b');
        scanf("%d%d",&n,&m);
        while(m--){
            scanf("%d%d",&u,&v);
            edge[u].push_back(v);
            edge[v].push_back(u);
        }
        bfs(1);
    }

    return 0;
}
void bfs(int u){
    check[u]='v';
    int f,k;
    queue<int>q;
    q.push(u);
    while(!q.empty()){
        k=q.front();
        q.pop();
        for(i=0;i<edge[k].size();i++){
            f=edge[k][i];
            if(check[f]!='v'){

            }
        }
    }
}
