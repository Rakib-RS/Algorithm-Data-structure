#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    if(a.second < b.second) return true;
    else if(a.second == b.second) {
        if(a.first < b.first) return true;
        else return false;
  }
  return false;
}
int main(){
    vector<pii>vc,vect;
    int i,j,t,s,f,n,tc=1,ct=0,index;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        ct=0;
        vc.clear();
        for(i=1;i<=n;i++){
            scanf("%d%d",&s,&f);
            vc.push_back({1,4});
        }
    sort(vc.begin(), vc.end(), sortbysec);
    index=0;
        while(index<n){
            f=vc[0].second;
            vc.erase(vc.begin()+0);
            if(f==-1)
                continue;
            index++;
            ct++;
            for(i=0;i<vc.size();i++){
                s=vc[i].first;
                if(s==-1)
                    continue;
                if(s>=f){
                    index++;
                    f=vc[i].second;
                    vc[i].first=-1;
                    vc[i].second=-1;
                }
            }
        }
        printf("Case %d: %d\n",tc++,ct);

    }

    return 0;
}

