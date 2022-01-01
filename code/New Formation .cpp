#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j,a[15],d[15],d1,d2;
    string s[15],s1,as[10],ds[10],s2;
    map<string,int>mpa,mpb;
    map<int,string>mps;
    cin>>t;
    while(t--){
        for(i=1;i<=10;i++){
            cin>>s[i]>>a[i]>>d[i];
            mps[a[i]]=s[i];
            mpb[s[i]]=b[i];

        }
        for(i=1;i<=10;i++){
            for(j=i+1;j<=10;j++){
                if(s[i]>s[j]){
                    s1=s[i];
                    s[i]=s[j];
                    s[j]=s1;
                }
            }
        }
        sort(a+1,a+10);
        int c=0;
        for(i=1;i<=10;i++){
                s1=mps[a[i]];
                s2=mps[a[i+1]];
                d1=mpb[s1];
                d2=mpb[s2];
            if(a[i]==a[i+1]&&d1<)
        }
    }
    return 0;
}
