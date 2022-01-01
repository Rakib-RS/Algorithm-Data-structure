#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c,b,mx=0,mi,i,a,p;
    scanf("%d%d",&n,&c);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(i>1){
            p=b-a-c;
            mx=max(mx,p);
        }

        b=a;

    }
    cout<<mx<<endl;
    return 0;
}
