#include<iostream>
#include<utility>
using namespace std;
int main(){
    pair<int,int>pr;
    int i;
    for(i=1;i<=5;i++){

        pr.first=i;
        pr.second=i+1;
        cout<<pr.first<<endl;
        cout<<pr.second<<endl;
    }

    return 0;
}
