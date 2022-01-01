#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k;
    string s1,s2,s3,s4,s5,sr2,sr5,sr,ss;
    map<char,int>c1,c2,c3,c4;j=0;
    cin>>s1>>s2;sr=s1;ss=s2;
        for(i=0;i<sr.size();i++){
                s1=sr;
                s2=ss;
        s3+=s1[i];
        s5+=s2[i];
        s1.erase(0,i);
        s2=s2.erase(0,i);
        sort(s3.begin(),s3.end());
        sort(s5.begin(),s5.end());
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
         if((s1==s2&&s3==s5)||(s1==s5&&s2==s3)){
            j=1;break;
         }
    }
   /* j=s1.size()/2;
    s1.erase(0,j);
    s2=s2.erase(0,j);
    sort(s3.begin(),s3.end());
    sort(s5.begin(),s5.end());
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    j=0;
    if(sr==ss)
        cout<<"YES"<<endl;
   else if((s1==s2&&s3==s5)||(s1==s5&&s2==s3))
    */;
   if(j==1||sr==ss)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

