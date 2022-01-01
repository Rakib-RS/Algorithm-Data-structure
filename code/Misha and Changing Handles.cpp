#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j=0;
    string s1,s2,c;
    vector<string>sf;
    map<string,int>m2;
    map<string,string>mf,mc;
    cin>>n;
    getchar();
    for(i=0;i<n;i++){
        cin>>s1>>s2;
        m2[s1]++;m2[s2]++;
        if(m2[s1]>1){
            c=mc[s1];
            mf[c]=s2;
            mc[s2]=c;
        }
        else{
            sf.push_back(s1);
            mf[s1]=s2;
            mc[s2]=s1;
        }

    }
    cout<<sf.size()<<endl;
    for(j=0;j<sf.size();j++){
        cout<<sf[j]<<" "<<mf[sf[j]]<<endl;
    }
    return 0;
}
