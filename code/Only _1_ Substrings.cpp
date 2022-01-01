#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int t,j,sum=0;
    cin>>t;
    while(t--){
        cin>>s;j=0;sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                j++;
            }
            else{
                sum+=(j*(j+1))/2;
                j=0;
            }
        }
        sum+=(j*(j+1))/2;
        cout<<sum<<endl;
    }
    return 0;
}
