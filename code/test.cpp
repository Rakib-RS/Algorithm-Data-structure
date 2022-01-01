#include <bits/stdc++.h>

#define pii             pair <int,int>
#define sc              scanf
#define pf              printf
#define Pi              2*acos(0.0)
#define ms(a,b)         memset(a, b, sizeof(a))
#define pb(a)           push_back(a)
#define MP              make_pair
#define db              double
#define ll              long long
#define EPS             10E-10
#define ff              first
#define ss              second
#define sqr(x)          (x)*(x)
#define D(x)            cout<<#x " = "<<(x)<<endl
#define VI              vector <int>
#define DBG             pf("Hi\n")
#define MOD             100007
#define MAX             10000
#define CIN             ios_base::sync_with_stdio(0); cin.tie(0)
#define SZ(a)           (int)a.size()
#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define loop(i,n)       for(int i=0;i<n;i++)
#define REP(i,a,b)      for(int i=a;i<b;i++)
#define TEST_CASE(t)    for(int z=1;z<=t;z++)
#define PRINT_CASE      printf("Case %d: ",z)
#define all(a)          a.begin(),a.end()
#define intlim          2147483648
#define inf             1000000
#define ull             unsigned long long

using namespace std;

vector<int>edge[30010];
vector<int>cost[30010];
int n,point1,point2,ans,v1;
bool visited[30010];
int d[30010];
void bfs(int src)
{
    visited[src]=1;
    d[src]=0;
    queue<int>Q;
    Q.push(src);

    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        if(d[u]>v1)
        {
            v1=d[u];
            point1=u;
        }

        for(int i=0;i<SZ(edge[u]);i++)
        {
            int v=edge[u][i];
            if(d[v]<d[u]+cost[u][i] && !visited[v])
            {
                d[v]=d[u]+cost[u][i];
                Q.push(v);
                visited[v]=1;
            }
        }
    }
}

void allclear(int n)
{
    loop(i,n+5)
    {
        edge[i].clear();
        cost[i].clear();
        d[i]=0;
        visited[i]=0;
    }
    v1=-1;
}
int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int t;
    sf(t);
    TEST_CASE(t)
    {
        sf(n);
        allclear(n);
        loop(i,n-1)
        {
            int u,v,w;
            sfff(u,v,w);
            edge[u].pb(v);
            edge[v].pb(u);
            cost[u].pb(w);
            cost[v].pb(w);
        }
        bfs(0);
        cout<<v1<<endl;
        loop(i,n+5)
       {
          d[i]=0;
          visited[i]=0;
       }
        v1=-1;
        bfs(point1);
        PRINT_CASE;
        pf("%d\n",v1);
    }
    return 0;
}

