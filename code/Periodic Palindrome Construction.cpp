#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n,p,i,j,k,a,b,l1,l2;
    string s[10];
    s[3]="aba";
    cin>>t;
    while(t--){
            string f;
        cin>>n>>p;a=n/3;
        if(n==1||n==2||p==1||(n%p!=0))cout<<"impossible"<<endl;
        else if(n==3&&p==3)cout<<"aba"<<endl;
        else if(n==4)cout<<"abba"<<endl;
        else if(n==5)cout<<"abbba"<<endl;
        else {
        if(a%2!=0)
            a=a-1;
        l1=a/2*3;
        l2=n-l1;
        for(i=1;i<=a/2;i++){
            f+=s[3];
        }
        for(i=l1;i<l2;i++){
            f+="b";
        }
        for(i=1;i<=a/2;i++){
            f+=s[3];
        }
        cout<<f<<endl;
      }
    }
    return 0;
}
