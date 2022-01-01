#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
char graph[22][22];
int visit [22][22],n,m,level[22][22],h1,h2;
void bfs(int x,int y);
int main(){
    int t,test=1,i,j,sum,x2,y2,a1,a2,b1,b2,c1,c2;
   /* freopen("txt.txt","r",stdin);*/
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        memset(visit,0,sizeof visit);
        for(i=1;i<=n;i++){
                getchar();
            for(j=1;j<=m;j++){
                scanf("%c",&graph[i][j]);
                if(graph[i][j]=='m'){
                    graph[i][j]='#';
                }
                if(graph[i][j]=='h'){
                    h1=i;h2=j;
                }
                if(graph[i][j]=='a'){
                    a1=i;
                    a2=j;
                }
                if(graph[i][j]=='b'){
                    b1=i;
                    b2=j;
                }
                if(graph[i][j]=='c'){
                    c1=i;
                    c2=j;
                }
            }
        }
        x2=3;
        sum=0;
        while(x2--){
            for(i=1;i<=n;i++){
                for(j=1;j<=m;j++)
                    level[i][j]=0;
            }
            if(x2==2){
                bfs(a1,a2);
            }
            else if(x2==1)
                bfs(b1,b2);
            else bfs(c1,c2);
            sum=max(sum,level[h1][h2]);
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
    level[x][y]=0;
    while(!q.empty()){
        pii top=q.front();
        q.pop();
        x1=top.first;
        y1=top.second;
        if(x1-1>0&&graph[x1-1][y1]!='#'&&visit[x1-1][y1]!=1){
            q.push(pii(x1-1,y1));
            visit[x1-1][y1]=1;
            level[x1-1][y1]=level[x1][y1]+1;
        }
        if(y1-1>0&&graph[x1][y1-1]!='#'&&visit[x1][y1-1]!=1){
            q.push(pii(x1,y1-1));
            visit[x1][y1-1]=1;
            level[x1][y1-1]=level[x1][y1]+1;
        }
        if(x1+1<=n&&graph[x1+1][y1]!='#'&&visit[x1+1][y1]!=1){
            q.push(pii(x1+1,y1));
            visit[x1+1][y1]=1;
            level[x1+1][y1]=level[x1][y1]+1;
        }
        if(y1+1<=m&&graph[x1][y1+1]!='#'&&visit[x1][y1+1]!=1){
            q.push(pii(x1,y1+1));
            visit[x1][y1+1]=1;
            level[x1][y1+1]=level[x1][y1]+1;
        }
    }


}
