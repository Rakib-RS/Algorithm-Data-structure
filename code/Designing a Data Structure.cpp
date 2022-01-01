#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>mp,mp1;
    map<int,int>::iterator it;
    int k,i,j,f=0,b=0,mx,mn,n,f1=0,b2=0;
    cin>>n;
    string s1,s2,s;
    getchar();
    while(n--){
        getline(cin,s1);
        if(s1[0]='I'){
            if(s1[7]=='B'){
                s1.erase(0,12);
                stringstream ss(s1);
                ss>>k;
                b2=b;
                mp[b--]=k;
                mp1[k]=0;
            }
            else{
                s1.erase(0,12);
                stringstream ss(s1);
                ss>>k;f1=f;
                mp[f++]=k;
                mp1[k]=0;
            }
        }
        else if(s1[0]=='G'){
            if(s1[4]=='F'){
                cout<<mp[f1]<<endl;
            }
            else if(s1[4]=='B')
                cout<<mp[b2]<<endl;
            else if(s1[5]=='a'){
                it=max_element(mp1.begin(),mp1.end(),mp1.value_comp());
                cout<<it->first<<endl;
            }
            else {
                it=min_element(mp1.begin(),mp1.end(),mp1.value_comp());
                cout<<it->first<<endl;
            }
        }
        else {
            if(s1[6]=='F'){
                it=mp.end();
                mp.erase(it);
                it=mp1.end();
                mp1.erase(it);
            }
            else{
                it=mp.begin();
                mp.erase(it);
                it=mp1.begin();
                mp1.erase(it);
            }
        }
    }

    return 0;
}
