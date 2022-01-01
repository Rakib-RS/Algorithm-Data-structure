#include<bits/stdc++.h>
#include<utility>
using namespace std;
#define pii pair<int,int>
int main(){
    //pair<int,int>pr;
    int i,x,y;
    queue<pii>q;
    for(i=1;i<=5;i++){
        q.push(pii(i,i+1));
        pii top=q.front();
        x=top.first;
        y=top.second;
        cout<<x<<y<<endl;
        q.pop();
    }

    return 0;
}

