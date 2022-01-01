#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>vc;
    int i,j=1,k=1,w,l;
    string s,s1,s2;
    while(1){
        if(k==1){
            cin>>s;
            if(s=="#"){
                k++;
                getchar();
            }
            else{
                vc.push_back(s);
            }
        }
        else{

            getline(cin,s);
            w=0;
            s1.clear();
            if(s=="#") break;
            for(l=0;l<s.size();l++){
                    if(s[l]==' ')continue;
                 s1+=s[l];
            }
            s2=s1;
            //cout<<"s2="<<s2<<endl;
            while(1){
                for(i=0;i<vc.size();i++){
                        cout<<vc[i]<<endl;
                        cout<<s1<<endl;
                    if(s1.find(vc[i])!=string::npos)
                        w++;
                }
                next_permutation(s1.begin(),s1.end());
                if(s1==s2) break;
            }
            cout<<w<<endl;

        }
    }
    return 0;
}
