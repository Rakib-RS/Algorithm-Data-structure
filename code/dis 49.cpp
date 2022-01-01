// Time complexity : O(ElogV)
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector< pii > vii;
#define INF 0x3f3f3f3f
pair <int, int> temp,t1;

vii *G;
vi Dist;
void Dijkstra(int source, int N) {
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
}
int main() {
    int N, M, u, v, w, source;
    printf("%d\n",INF);
    cin >> N >> M;
    G = new vii[N+1];

    for(int i=0;i<M;++i){
        cin >> u >> v >> w;
        G[u].push_back({v,w});
        G[v].push_back({u,w});
    }
    cin >> source;
    Dijkstra(source,N);


    return 0;
}
