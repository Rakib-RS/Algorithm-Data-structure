#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,i,j,k,t,m;
    cin>>t;
    while(t--){
            map<int,int>mp;
            cin>>n;
            n+=1;
        while(n--){
                m=n;
        while(m){
            j=m%10;
            mp[j]++;
            m/=10;
        }
        }
        for(i=0;i<=9;i++){
            if(i<9)
                cout<<mp[i]<<" ";
            else cout<<mp[i]<<endl;
        }
    }

    return 0;
}
