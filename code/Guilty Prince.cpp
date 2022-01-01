#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
char graph[22][22];
int visit [22][22],w,h;
void bfs(int x,int y);
int main(){
    int t,test=1,i,j,sum,x2,y2;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&w,&h);
        memset(visit,0,sizeof visit);
        for(i=1;i<=h;i++){
                getchar();
            for(j=1;j<=w;j++){
                scanf("%c",&graph[i][j]);
                if(graph[i][j]=='@'){
                    x2=i;y2=j;
                }
            }
        }
        bfs(x2,y2);
        sum=0;
        for(i=1;i<=h;i++){
            for(j=1;j<=w;j++){
                if(visit[i][j]==1)
                    sum++;
            }
        }
        printf("Case %d: %d\n",test++,sum);
    }
    return 0;
}
void bfs(int x,int y){
    queue<pii>q;
    int x1,y1;
    memset(visit,0,sizeof visit);
    visit[x][y]=1;;
    q.push(pii(x,y));
    while(!q.empty()){
        pii top=q.front();
        q.pop();
        x1=top.first;
        y1=top.second;
        if(x1-1>0&&graph[x1-1][y1]=='.'&&visit[x1-1][y1]!=1){
            q.push(pii(x1-1,y1));
            visit[x1-1][y1]=1;
        }
        if(y1-1>0&&graph[x1][y1-1]=='.'&&visit[x1][y1-1]!=1){
            q.push(pii(x1,y1-1));
            visit[x1][y1-1]=1;
        }
        if(x1+1<=h&&graph[x1+1][y1]=='.'&&visit[x1+1][y1]!=1){
            q.push(pii(x1+1,y1));
            visit[x1+1][y1]=1;
        }
        if(y1+1<=w&&graph[x1][y1+1]=='.'&&visit[x1][y1+1]!=1){
            q.push(pii(x1,y1+1));
            visit[x1][y1+1]=1;
        }
    }


}
