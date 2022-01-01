#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
priority_queue<pii, vector<pii>, greater<pii> >q,pq;
vector<pii>vc,vc1;
int main(){
    int s,f,i,j,n,t,tc=1,ct=1;
    freopen("monitor.txt","r",stdin);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d%d",&s,&f);
            //q.push({f,s});
            vc.push_back({f,s});
        }
        sort(vc.begin(),vc.end());
        for(i=0;i<n;i++)
            //cout<<vc[i].second<<" "<<vc[i].first;
        ct=0;
        j=0;
        while(!vc.empty()){
            ct++;
            j=0;
            f=vc[0].first;
            //cout<<f<<endl;
            vc1=vc;
            vc.erase(vc.begin()+0);
            for(i=1;i<vc1.size();i++){
                s=vc1[i].second;
                if (s>f){
                  f =vc1[i].first;
                 // cout<<s<<" "<<f<<endl;
                  vc.erase(vc.begin()+i-j);
                  j++;
                }

          }
        }
        printf("Case %d: %d\n",tc++,ct);
    }

    return 0;
}

