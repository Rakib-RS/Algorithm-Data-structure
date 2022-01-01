#include<bits/stdc++.h>
using namespace std;
#define MAX 1010
#define N 150
using namespace std;
vector<int>edge[1010],level;
int v,ch;
vector<bool>visit;
int bfs(int u);
bool st[MAX];
int prime[N];
void sive(){
    int i,j,n,k;
    j=1;
    prime[j++]=2;
    st[0]=st[1]=1;
   for(i=3;i<=(MAX);i+=2){
        if(st[i]==0){
            prime[j++]=i;
            if(MAX/i>=i){
            for(k=i*i;k<MAX;k+=(2*i))
                st[k]=1;
            }
        }
    }
}
void graph();
int main(){
    sive();
    graph();
    int t,tc=1,u,i,j;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&u,&v);
        ch=0;
        j=bfs(u);
        if(j>=0)
            printf("Case %d: %d\n",tc++,j);
        else printf("Case %d: -1\n",tc++);

    }

    return 0;
}
void graph(){
    int i,j,k;
    for(i=2;i<=1010;i++)
    for(j=1;prime[j]<=(i+1)/2;j++){
        if(i%prime[j]==0)
            edge[i].push_back(prime[j]);
    }
}
int bfs(int u){
    level.assign(1005,0);
    visit.assign(1005,false);
    queue<int> q;
    q.push(u);
    int k;
    if(u==v)return level[u];
    while (!q.empty()) {

        int f = q.front();
        q.pop();
        for ( int i = 0; i <edge[f].size(); i++) {
            k=edge[f][i]+f;
            if(k<=v&&!visit[k]){
                visit[k]=true;
                q.push(k);
                level[k]=level[f]+1;
                if(k==v){
                    return level[k];
                }
            }
        }
    }
    return -1;
}
