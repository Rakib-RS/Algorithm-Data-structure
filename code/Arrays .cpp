#include<bits/stdc++.h>
using namespace std;
long long int ar[500000],br[500000];
int main(){
    long long int a,b,i,j,n,m,c=0,r,s;
    cin>>a>>b>>n>>m;
    for(i=1;i<=a;i++){
        cin>>ar[i];
    }
    for(i=1;i<=b;i++){
        cin>>br[i];
    }
    sort(ar+1,ar+1+a);
    sort(br+1,br+1+b);
    reverse(br+1,br+1+b);
    r=ar[n];
    s=br[m];
    if(r<s)
        printf("YES\n");
    else printf("NO\n");

    return 0;
}
