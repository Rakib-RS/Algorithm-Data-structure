#include<bits/stdc++.h>
using namespace std;
int a[500];
int main(){
    int t,q,i,j,c,x,l,r,p,c0;
    cin>>t;
    while(t--){
        cin>>q;
        memset(a,0,sizeof a);
        c0=0;
        while(q--){
            cin>>c;
            j=1;
            if(c==3){
                cin>>l>>r;
                p=r+l-p;
                j=0;
            }
            else cin>>x;
            if(c==5){
                if(a[x]==1||(c0==4&&x>p))
                    cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
            else {
                if(j)
                    p=x;
                a[p]=1;
                c0=c;
                if(c==4)
                    a[p]=0;
            }


        }

    }

    return 0;
}

