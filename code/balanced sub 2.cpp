#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l=0,r=0,i,ma=0,c,d=0,j,k;
    string s;
    cin>>n;
    cin>>s;
    c=0;
    k=n-1;
    for(i=0;i<n;i++){
        for(j=l;j<=k;j++){
            if(s[i]==0)
                c++;
            else d++;
        }
        if(c==d)
            ma=max(ma,c+d);
    }
    cout<<ma<<endl;
    return 0;
}
