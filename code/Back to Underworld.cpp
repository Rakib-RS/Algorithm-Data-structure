#include<bits/stdc++.h>
using namespace std;
vector<bool>visit;
vector<long long int>edge[20005];
vector<long long int>level;
int bfs(long long int u);
int main(){
   long long int t,test=1,i,j,mx1,mx2,n,u,v,sum;
    scanf("%lld",&t);
    set<long long int>st;
    set<long long int>::iterator it;
    while(t--){
        scanf("%lld",&n);
        visit.clear();
        for(i=0;i<20005;i++)
            edge[i].clear();
        level.clear();
        st.clear();
        visit.assign(20005,false);
        level.assign(20005,0);
        for(i=1;i<=n;i++){
            scanf("%lld%lld",&u,&v);
            edge[u].push_back(v);
            edge[v].push_back(u);
            st.insert(u);
            st.insert(v);
        }
        sum=0;
        for(it=st.begin();it!=st.end();it++){
            if(!visit[*it]){
                sum+=bfs(*it);
            }
        }
        printf("Case %lld: %lld\n",test++,sum);
    }
    return 0;
}
int bfs(long long int u){
    queue<long long int> q;
   long long  int f,ly=0,va=0;
    q.push(u);
    visit[u] = true;
    level[u]=0;
    ly++;
    while (!q.empty()) {
        f = q.front();
        q.pop();
        for ( int i = 0; i <edge[f].size(); i++) {
            if (!visit[edge[f][i]]) {
                q.push(edge[f][i]);
                visit[edge[f][i]] = true;
                level[edge[f][i]]=level[f]+1;
                if((level[edge[f][i]])%2==0)ly++;
                else va++;
            }
        }
    }
    return max(ly,va);
}

