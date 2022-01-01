#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
int al,visit[220][220],ch,n,time1,level[220][220],a,b;
char graph[220][220];
int  bfs(int x,int y);
int main(){
    int t,tc=1,i,j,k,x,y,sum;
    /*freopen("txt.txt","r",stdin);*/
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        al=0;
        for(i=1;i<=n;i++){
                getchar();
            for(j=1;j<=n;j++){
                scanf("%c",&graph[i][j]);
                if(graph[i][j]!='.'&&graph[i][j]!='#'){
                    al++;
                }
                if(graph[i][j]=='A'){
                    a=i;
                    b=j;
                }
            }
        }
        sum=0;j=0;
        for(ch=1;ch<al;ch++){
            j=bfs(a,b);
            if(j==-1)break;
            if(j>=0)
                sum+=j;
        }
        if(j>=0)
            printf("Case %d: %d\n",tc++,sum);
        else
            printf("Case %d: Impossible\n",tc++);
    }
    return 0;
}
int bfs(int x,int y){
    queue<pii>q;
    int x1,y1,mx=-1;
    memset(visit,0,sizeof visit);
    memset(level,0,sizeof level);
    visit[x][y]=1;
    level[x][y]=0;
    q.push(pii(x,y));
    while(!q.empty()){
        pii top=q.front();
        q.pop();
        x1=top.first;
        y1=top.second;
        if(x1-1>0&&graph[x1-1][y1]!='#'&&visit[x1-1][y1]!=1&&graph[x1-1][y1]<=('A'+ch)){
            q.push(pii(x1-1,y1));
            visit[x1-1][y1]=1;
            level[x1-1][y1]=level[x1][y1]+1;
            if(graph[x1-1][y1]==('A'+ch)){
                a=x1-1;b=y1;
                return level[x1-1][y1];
            }
        }
        if(y1-1>0&&graph[x1][y1-1]!='#'&&visit[x1][y1-1]!=1&&graph[x1][y1-1]<=('A'+ch)){
            q.push(pii(x1,y1-1));
            visit[x1][y1-1]=1;
            level[x1][y1-1]=level[x1][y1]+1;;
            if(graph[x1][y1-1]==('A'+ch)){
                a=x1;b=y1-1;
                return level[x1][y1-1];
            }
        }
        if(x1+1<=n&&graph[x1+1][y1]!='#'&&visit[x1+1][y1]!=1&&graph[x1+1][y1]<=('A'+ch)){
            q.push(pii(x1+1,y1));
            visit[x1+1][y1]=1;
            level[x1+1][y1]=level[x1][y1]+1;
            if(graph[x1+1][y1]==('A'+ch)){
                a=x1+1;b=y1;
                return level[x1+1][y1];
            }
        }
        if(y1+1<=n&&graph[x1][y1+1]!='#'&&visit[x1][y1+1]!=1&&graph[x1][y1+1]<=('A'+ch)){
            q.push(pii(x1,y1+1));
            visit[x1][y1+1]=1;
            level[x1][y1+1]=level[x1][y1]+1;
            if(graph[x1][y1+1]==('A'+ch)){
                a=x1;b=y1+1;
                return level[x1][y1+1];
            }
        }
    }
    return -1;
}


