#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,t,nu,k;
    vector<int>vc;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&t,&nu);
        vector<int>::iterator it;
     if(t==2){
        sort(vc.begin(),vc.end());
        it=lower_bound(vc.begin(),vc.end(),nu);
        j=it-vc.begin();
        k=vc.size()-j;
        if(k>0)
            cout<<"1"<<endl;
        else cout<<"Sorry\n";
        if(vc.size()>=1)
        vc.resize(vc.size()-1);

     }
     else vc.push_back(nu);
    }
    return 0;
}
