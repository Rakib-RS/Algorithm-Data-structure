#include<bits/stdc++.h>
using namespace std;
vector<int>edge[100005],iner,outer;
vector<bool>visit;
void bfs(int u){
    visit.assign(100005,false);
    iner.assign(100005,0);
    outer.assign(100005,0);
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
                if(iner[f]==0&&outer[f]>=0){
                    cout<<f<<" "<<k<<endl;
                    iner[k]++;
                    outer[f]++;
                }
                else {
                        cout<<k<<" "<<f<<endl;
                        outer[k]++;
                        iner[f]++;
                }
            }
        }
    }
}
int main(){
    int t,n,u,v,tc=1,i,j;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<=100005;i++)
            edge[i].clear();
        for(i=1;i<n;i++){
            scanf("%d%d",&u,&v);
            edge[u].push_back(v);
            edge[v].push_back(u);
        }
        printf("Case %d:\n",tc++);
        bfs(1);

    }
    return 0;
}
