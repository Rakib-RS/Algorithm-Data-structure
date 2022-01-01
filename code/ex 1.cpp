#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector< pii > vii;
#define INF 0x3f3f3f3f
pair <int, int> temp,t1;

vii *G;
vi Dist;
int Dijkstra(int source, int N,int dis) {
    priority_queue<pii, vector<pii>, greater<pii> > Q,q;
    Dist.assign(N+1,INF);
    Dist[source] = 0;
    Q.push({0,source});
    while(!Q.empty()){
        int u = Q.top().second;
        Q.pop();
        for(int i=0 ; i< G[u].size(); i++){
            temp = G[u][i];
            int v = temp.first;
            int w = temp.second;
            if(Dist[v] > Dist[u]+w){
                Dist[v] = Dist[u]+w;
                Q.push({Dist[v],v});
            }
        }
    }
    return Dist[dis];
}
int main() {
    int n, m, u, v, w, source,ttl,t,ct=0,des,i,j;
    //freopen("mice.txt","r",stdin);
    cin>>t;
    while(t--){
        cin >> n >>des>>ttl>>m;
        G = new vii[n+1];

        for( i=0;i<m;++i){
            cin >> u >> v >> w;
            G[u].push_back({v,w});
            G[v].push_back({u,w});
        }
        ct=0;
        for ( i = 1; i <= n; i++ ) {
            int dist=Dijkstra(i,n,des);
                //cout<<dist<<endl;
            if ( dist <= ttl ) {
                ct++;;
            }
        }
        cout<<ct<<endl;

    }


    return 0;
}

