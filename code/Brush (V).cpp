#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector< pii > vii;
#define INF 0x3f3f3f3f
pair <int, int> temp,t1;
vii *G;
vi Dist;
void Dijkstra(int source, int N);
int main(){
    int t,n,m,u,v,w,i,j,tc=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        G = new vii[n+1];
        while(m--){
            scanf("%d%d%d",&u,&v,&w);
            G[u].push_back({v,w});
            G[v].push_back({u,w});
        }
        Dijkstra(1,n);
        if(Dist[n]==INF)
            printf("Case %d: Impossible\n",tc++);
        else
            printf("Case %d: %d\n",tc++,Dist[n]);
    }

    return 0;
}
void Dijkstra(int source, int N) {
    priority_queue<pii, vector<pii>, greater<pii> > Q;
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
