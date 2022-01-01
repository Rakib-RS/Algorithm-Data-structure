#include<bits/stdc++.h>
using namespace std;
vector<int>edge[1010];
int cost[1010],avg;
vector<bool>visit;
int bfs(int u){
    queue<int> q;
    q.push(u);
    visit[u] = true;
    int k,ct=0;
    while (!q.empty()) {

        int f = q.front();
        q.pop();
            ct+=cost[f]-avg;
            cost[f]=avg;
        for ( int i = 0; i <edge[f].size(); i++) {
                k=edge[f][i];
            if (!visit[k]) {
                q.push(k);
                visit[k] = true;
                cost[k]=cost[k]+ct;
                ct=0;
            }
        }

    }
    if(ct!=0)
        return 0;
    else return 1;
}

int main(){
    int n,i,u,v,tc=1,t,m,sum,j;
    double s1;
    scanf("%d",&t);
    while(t--){
            scanf("%d%d",&n,&m);
            sum=0;
        for(i=0;i<1010;i++)
            edge[i].clear();
        for(i=1;i<=n;i++){
            scanf("%d",&cost[i]);
            sum+=cost[i];
        }
        avg=sum/n;
        s1=sum/(n*1.0);
        j=1;
        while(m--){
            scanf("%d%d",&u,&v);
            edge[u].push_back(v);
            edge[v].push_back(u);
        }
        visit.assign(1010,false);
        if(avg==s1){
            for(i=1;i<=n;i++){
                if(!visit[i])
                   j= bfs(i);
                if(j==0)
                    break;
            }
        }
        if(avg!=s1||j==0)
            printf("Case %d: No\n",tc++);
        else printf("Case %d: Yes\n",tc++);
    }
    return 0;
}
