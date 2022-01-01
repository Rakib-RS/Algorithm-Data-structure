#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s1[10],s2,s3;
    int a[10],j=0,i,l=0;
    vector<string>vc;
    cin>>s;
    for(i=0;i<10;i++){
        cin>>s1[i];
    }
    for(i=0;i<s.size();i++){
        if(j<10){
            s3=s[i];
            s2+=s3;
            j++;
        }
        if(j==10){
            for(int k=0;k<10;k++){
                if(s2==s1[k]){
                    a[l++]=k;
                    break;
                }
            }

            s2.clear();j=0;
        }
    }

    for(i=0;i<8;i++)
        cout<<a[i];
    cout<<endl;

    return 0;
}
