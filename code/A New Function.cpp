#include<bits/stdc++.h>
using namespace std;
long long int a[20000000];
map<long long int,long long int>mp;
set<long long int>st;
int main(){
    long long int t,tc=1,n,i,j,s1,s2,k;
    cout<<"ok"<<endl;
    for(i=1;i<=100000000;i++){
        st.clear();
        mp.clear();
        if(i%2==0&&i!=2)
            st.insert(2);
        j=i;
        while(j%2==0){
            mp[2]++;
            j/=2;
        }
        k=3;
        while(k*k<=j){
            if(j%k==0){
                st.insert(k);
                mp[k]++;
                j/=k;
            }
            else k+=2;
        }
        if(j!=i&&j!=1){
            st.insert(j);
            mp[j]++;
        }

    }
    return 0;
}
