#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        if(s=="wa")
            printf("Wrong Answer\n");
        else if(s=="ac")
            printf("Accepted\n");
        else if(s=="rte")
            printf("Run Time Error\n");
        else printf("Time Limit Exceeded\n");
    }
    return 0;
}
