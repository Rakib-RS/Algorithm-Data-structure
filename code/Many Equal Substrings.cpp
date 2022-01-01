#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i,j,l,c;
    string t,s,s1;
    scanf("%d%d",&n,&k);
    getchar();
    cin>>t;
    s1=t;
    /*reverse(s1.begin(),s1.end());*/
    j=l=c=0;
    for(i=1;i<s1.size();i++){
        if(s1[i]==t[l]){
            j++;
            l++;
            if(t[l]==t[l-1])c=1;
            else c=0;
        }
        else {
            if(s1[i]==t[l]&&c==1)j=j;
            else{
                j=0;
                l=0;
            }
        }

    }
    if(j==0&&s1[i-1]==t[l]&&i>1)j=1;
    s=t;
    s1.erase(0,j);
    for(i=1;i<k;i++){
        s+=s1;
    }
    cout<<s<<endl;
    return 0;
}
