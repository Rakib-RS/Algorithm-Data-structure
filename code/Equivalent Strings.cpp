#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k;
    string s1,s2,s3,s4,s5,sr2,sr5,sr,ss;
    map<char,int>c1,c2,c3,c4;
    cin>>s1>>s2;sr=s1;ss=s2;
    for(i=0;i<s1.size()/2;i++){
        c1[s1[i]]++;
        c2[s2[i]]++;
        s3+=s1[i];
        s5+=s2[i];
    }
    j=s1.size()/2;
    s1.erase(0,j);
    s2=s2.erase(0,j);
    for(i=0;i<s1.size();i++){
        c3[s1[i]]++;
        c4[s2[i]]++;
    }
    j=1;
    for(i=0;i<s3.size();i++){
        if(c1[s3[i]]!=c2[s3[i]]){
            j=0;break;
        }
    }
    if(s3.size()!=s5.size()) j=0;
    if(j){
            for(i=0;i<s1.size();i++){
            if(c3[s1[i]]!=c4[s1[i]]){
                j=0;break;
        }
        }
        if(s1.size()!=s2.size()) j=0;
    }
    if(j==0){
        j=1;
        for(i=0;i<s3.size();i++){
        if(c1[s3[i]]!=c4[s3[i]]){
            j=0;break;
        }
    }
    if(s3.size()!=s2.size()) j=0;
    if(j){
            for(i=0;i<s1.size();i++){
                if(c2[s1[i]]!=c3[s1[i]]){
                    j=0;break;
                }
        }
        if(s5.size()!=s1.size()) j=0;
    }
    }
    /*cout<<s3<<endl;
    cout<<s5<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    sr2=s2;
    reverse(sr2.begin(),sr2.end());
    sr5=s5;
    reverse(sr5.begin(),sr5.end());
    if(sr==ss)
        cout<<"YES"<<endl;
   else if((s1==s2&&s3==s5)||(s1==s5&&s2==s3))
        cout<<"YES"<<endl;
    else if((s1==sr2&&s3==sr5)||(s1==sr5&&sr2==s3))
        cout<<"YES"<<endl;*/
    if(j)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
