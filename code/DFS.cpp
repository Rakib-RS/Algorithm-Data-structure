#include<bits/stdc++.h>
using namespace std;
void bfs(int i,int j);
int r, c,f=0;
string s[100];
int main(){
    int i,j;r=3;c=3;
    for(i=1;i<=3;i++)
        cin>>s[i];
    for(i=1;i<=3;i++){
        for(j=0;j<3;j++)
            cout<<s[i][j]<<" ";
    }
    f=0;i=1;j=1;
    bfs(i,j);
    cout<<f<<endl;
    return 0;
}
void bfs(int i,int j){
        cout<<s[i][j]<<endl;
        if (i<1||j<1||i>r||j>c)
            return;
        else if(s[i][j]=='x')
            return;
        else if(s[i][j]=='b')
        {
            f=1;return;
        }
        else {
            bfs(i,j-1);
            bfs(i-1,j);
            bfs(i+1,j);
            bfs(i,j+1);
        }
}
