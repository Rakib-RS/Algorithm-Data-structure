
#include<bits/stdc++.h>
using namespace std;
vector<int>edge[100],level;
vector<bool>visit;
void dfs(int u){
    visit.assign(1000,false);
    level.assign(1000,0);
    stack<int> s;
    s.push(u);
    visit[u] = true;
    int k;

    while (!s.empty()) {

        int f = s.top();
        s.pop();
        for ( int i = 0; i <edge[f].size(); i++) {
                k=edge[f][i];
            if (!visit[k]) {
                s.push(k);
                visit[k] = true;
                level[k]=level[f]+1;
            }
        }
    }
}

int main(){
    int n,i,u,v;
    cin>>n;
    vector<int>an;
    for(i=1;i<=n;i++){
        cin>>u>>v;
        edge[u].push_back(v);
        edge[v].push_back(u);
        an.push_back(u);
    }
    for(i=0;i<n;i++){
        if(!visit[u]){
            level[u]=0;
            bfs(u);
        }
    }
    return 0;
}
