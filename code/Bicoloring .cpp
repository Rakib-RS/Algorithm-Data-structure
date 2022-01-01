#include<bits/stdc++.h>
using namespace std;
vector<int>vc[n+1];
int main(){
    int i,j,k,n,e;
    //freopen("out.txt","w",stdout);
    while(cin>>n&&n){
        cin>>e;
       while(e--){
            cin>>i>>j;
            vc[i].push_back(j);
            vc[j].push_back(i);
       }
       int ch=1,a,b,l,c;
       for(i=0;i<n;i++){
            for(j=0;j<vc[i].size();j++){
                    a=vc[i][j];
                for(k=0;k<vc[a].size();k++){
                    b=vc[a][k];
                    if(b==i)
                        continue;
                    for(l=0;l<vc[b].size();l++){
                        c=vc[b][l];
                        if(c==i){
                            ch=0;break;
                        }
                    }
                    if(ch==0) break;
                }
                if(ch==0) break;
            }
            if(ch==0) break;
       }
       if(ch==1)
            cout<<"BICOLORABLE.\n";
       else cout<<"NOT BICOLORABLE.\n";
    }
    return 0;
}
