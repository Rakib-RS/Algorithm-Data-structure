#include<bits/stdc++.h>
using namespace std;
int main(){
    int j,k=0,d;
    string s,s1,s2[1200],s3,s4;
    s="never be so happy when you are happy and never be so sad when you are sad";
    for(j=0;j<s.size();j++){
        if(s[j]==' '){
            s2[k++]=s4;
            s4.clear();
        }
        else {
        s3=s[j];
        s4+=s3;
        }
    }

    while(cin>>s1){
            d=0;
        for(j=0;j<k;j++){
            if(s1==s2[j]){
                d=1;break;
            }
        }
        if(d)
            cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
    }
    return 0;
}
