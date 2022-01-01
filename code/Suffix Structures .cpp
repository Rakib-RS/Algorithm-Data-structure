#include<bits/stdc++.h>
using namespace std;
int main(){
        string s1,s2;
        map<char,int>m1,m2;
        int i,j=1,k=1,l=0,m,b=1;
        cin>>s1>>s2;
        for(i=0;i<s1.size();i++)
            m1[s1[i]]++;
        for(i=0;i<s2.size();i++)
            m2[s2[i]]++;
        for(i=0;i<s1.size();i++){
            if(s1[i]==s2[l]){
                l++;
            }
        }
        if(l!=s2.size()) k=0;

        for(i=0;i<s2.size();i++){
            if(m2[s2[i]]!=m1[s2[i]]){
            j=0;break;
            }
        }
        for(i=0;i<s2.size();i++){
            if(m2[s2[i]]>m1[s2[i]]){
            b=0;break;
            }
        }
        if(s1.find(s2)!=string::npos||k==1)
            cout<<"automaton"<<endl;
        else if(s1.size()==s2.size()&&j==1)
            cout<<"array"<<endl;
        else if(b)
            cout<<"both"<<endl;
        else cout<<"need tree"<<endl;
    return 0;
}
