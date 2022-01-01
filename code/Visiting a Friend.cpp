#include<bits/stdc++.h>
using namespace std;
int main(){
    vector< pair <int,int> > vc;
    int a,b,c,n,m,mi,ma,i,j,sum=0;
    cin>>n>>m;
    for(i=0;i<n;i++){
            cin>>a>>b;
        vect.push_back( make_pair(a,b) );
        if(i==0)
        {
            mi=a;
            ma=b;
        }
    }
    sort(vc.begin(),vc.end());
    for(i=0;i<n;i++){
        if(vc[i].first==0&&sum==0){
            sum=vc[i].second;
            j=vc[i].second;
        }
        if(sum>0&&vc[i].second==j){
            sum+=vc[i].second;
            j=vc[i].second;
        }

    }



    return 0;
}
