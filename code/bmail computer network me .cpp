#include<bits/stdc++.h>
using namespace std;
vector<int>edge[200010],level,parent;
vector<bool>visit;
void bfs(int u){
    visit.assign(200010,false);
    parent.assign(200010,0);
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
                parent[k]=f;
            }
        }
    }
}

int main(){
    int n,i,u,v,p;
    cin>>n;
    for(i=2;i<=n;i++){
        cin>>u;
        edge[u].push_back(i);
        edge[i].push_back(u);
    }
    bfs(n);
    cout<<"1";
    v=1;
    while(v!=n){
        cout<<" "<<parent[v];
        v=parent[v];
    }
    cout<<endl;


    return 0;
}
