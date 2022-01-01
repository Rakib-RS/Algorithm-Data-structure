#include<bits/stdc++.h>
using namespace std;
int visit[510][510],m,n,index1,qc[1010],sum=0,bc[1010];
char graph[510][510];
void dfs(int x,int y);
int main(){
    int i,j,t,tc=1,q,x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&m,&n,&q);
        printf("Case %d:\n",tc++);
        memset(visit,0,sizeof visit);
        memset(qc,0,sizeof qc);
        for(i=1;i<=m;i++){
            getchar();
            for(j=1;j<=n;j++)
                scanf("%c",&graph[i][j]);
        }
        for(index1=1;index1<=q;index1++){
            sum=0;
            memset(bc,0,sizeof bc);
            scanf("%d%d",&x,&y);
            dfs(x,y);
            printf("%d\n",qc[index1]+sum);
        }
    }
    return 0;
}
void dfs(int x,int y){
    if(x<1||y<1||x>m||y>n)
        return;
    if(visit[x][y]==index1||graph[x][y]=='#')
        return;
    if(visit[x][y]>0){
        if(bc[visit[x][y]]==0)
        sum+=qc[visit[x][y]];
            bc[visit[x][y]]=1;
        return;
    }
    if(graph[x][y]=='C')
        qc[index1]++;
    visit[x][y]=index1;
    dfs(x-1,y);
    dfs(x,y-1);
    dfs(x+1,y);
    dfs(x,y+1);
}
