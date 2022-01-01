#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int n,i,j=0,c=0,d1,d2;
    map<int,int>m1,m2;
    cin>>n;
    if(n%2!=0)c=0;
    else{
    for(i=1;i<sqrt(n)+1;i++){
        d2=n-i-i;
        d1=i+i;
        if(m1[d1]==0){
        if((d2%2==0)&&d2>0&&(d1!=d2)){
                    /*cout<<"d1="<<d1<<endl;
                    cout<<"d2="<<d2<<endl;*/
                    c++;
                    m1[d2]++;
            }
        }
    }
    }
    cout<<c<<endl;
    return 0;
}
