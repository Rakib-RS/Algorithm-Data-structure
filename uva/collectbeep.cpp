#include<iostream>
using namespace std;
struct point{
    int x;
    int y;
} p[25];
int dist[100][10000];
bool visit[100][10000];
int beepers;
#define mn 2147483647
void clear(){
    int i,j;
    for(i = 0;i<100;i++){
        for(j = 0 ;j<10000;j++){
            visit[i][j] = false;
        }
    }
}

int dp(int at,int mask){
    if(mask == (1<<beepers)-1){
        visit[at][mask] = true;
        return dist[at][mask] = abs(p[at].x - p[0].x) + abs(p[at].y - p[0].y);
    }
    if(visit[at][mask]) return dist[at][mask];
    int ans = 100000;
    for(int i =0;i<beepers;i++){
        if((mask & (1<<i))==0){
            int cost = dp(i,mask |(1<<i)) + abs(p[i].x - p[at].x) + abs(p[i].y - p[at].y);
            if(ans>cost) ans = cost;
        }
    }
   
    visit[at][mask] = true;

    return  dist[at][mask] = ans;
}
int main(){
    int t,i,j,k,r,c;
    //freopen("input.txt","r",stdin);
    cin>>t;
    while(t--){
        scanf("%d%d",&r,&c);
        scanf("%d%d",&p[0].x,&p[0].y);
        scanf("%d",&beepers);
        beepers++;
        for(i = 1;i<beepers;i++){
            scanf("%d%d",&p[i].x,&p[i].y);
        }
        clear();
        printf ("The shortest path has length %d\n", dp (0, 1));
    }
    return 0;
}