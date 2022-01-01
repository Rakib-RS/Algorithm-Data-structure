#include<bits/stdc++.h>
using namespace std;
vector<int>edge[200],cost[200];
vector<bool>l,r;
int sum=0,n;
void bfs(int u);
int main(){
    long long int t,tc=1,i,j,x1,y1,x2,y2,x,y;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld%lld%lld",&x1,&y1,&x2,&y2);
        x=(x2-x1);
        if(x<0)x=-x;
        y=(y2-y1);
        if(y<0)y=-y;
        x=__gcd(x,y);
        printf("Case %lld: %lld\n",tc++,x+1);
    }
    return 0;
}
