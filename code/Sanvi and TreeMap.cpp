#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int t,i,j;
    string s1,s2;
    cin>>t;
    while(t--){
        cin>>s1>>s2;
        if(s1==s2)j=0;
       else if((s1=="Dhaka"&&s2=="Chittagong")||(s2=="Dhaka"&&s1=="Chittagong"))
            j=200;
        else if((s1=="Dhaka"&&s2=="Rajshahi")||(s2=="Dhaka"&&s1=="Rajshahi"))
            j=300;
        else if((s1=="Dhaka"&&s2=="Kathmandu")||(s2=="Dhaka"&&s1=="Kathmandu"))
            j=3200;
        else if((s1=="Dhaka"&&s2=="Butwal")||(s2=="Dhaka"&&s1=="Butwal"))
            j=8200;
        else if((s1=="Chittagong"&&s2=="Butwal")||(s2=="Chittagong"&&s1=="Butwal"))
            j=8000;
        else if((s1=="Chittagong"&&s2=="Kathmandu")||(s2=="Chittagong"&&s1=="Kathmandu"))
            j=3000;
        else if((s1=="Chittagong"&&s2=="Rajshahi")||(s2=="Chittagong"&&s1=="Rajshahi"))
            j=500;
        else if((s1=="Rajshahi"&&s2=="Butwal")||(s2=="Rajshahi"&&s1=="Butwal"))
            j=8500;
        else if((s1=="Rajshahi"&&s2=="Kathmandu")||(s2=="Rajshahi"&&s1=="Kathmandu"))
            j=3500;
        else if((s1=="Kathmandu"&&s2=="Butwal")||(s2=="Kathmandu"&&s1=="Butwal"))
            j=11000;
        cout<<j<<endl;

    }

return 0;

}
