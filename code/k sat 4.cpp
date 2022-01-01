#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,k,i,j,t,l,f=1,p,d,v;
     /*freopen("txt.txt","r",stdin);*/
    cin>>t;d=1;
    while(t--){
        cin>>n>>m>>k;
        int a[n+100][k+100];
        for(i=1;i<=n;i++){
            for(j=1;j<=k;j++){
                cin>>a[i][j];
            }
        }
        cin>>p;
        int b[p+1];
        for(i=1;i<=p;i++)
            cin>>b[i];f=0;
        for(i=1;i<=n;i++){
            for(j=1;j<=k;j++){
                        f=0;
                    for(l=1;l<=p;l++){
                        if(b[l]>0){
                            if(b[l]==a[i][j]){
                                f=1;
                                break;
                            }
                        }
                    }
                    if(f==1)
                        break;
            }
            if(f==0){
            for(j=1;j<=k;j++){
                    if(a[i][j]<0){
                             v=abs(a[i][j]);
                             if(p==0) {
                                f=1;break;
                             }
                    }
                    else continue;
                    for(l=1;l<=p;l++){
                            if(v==b[l]){
                                f=0;
                                break;
                            }
                            else f=1;
                    }
                    if(f==1) break;

            }
        }
            if(f==0) break;
        }
        if(f)
            printf("Case %lld: Yes\n",d);
        else printf("Case %lld: No\n",d);
        d++;
    }

    return 0;
}
