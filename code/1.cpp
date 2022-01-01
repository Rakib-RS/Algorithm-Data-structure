#include<bits/stdc++.h>
using namespace std;
string graph[5];
int a,b,k;
string s;
int visit[6][6];
void dfs(int i,int j){
    if(i<0||j<0||i>3||j>3)
        return;
    if(graph[i][j]==s[0]){
        a=i;
        b=j;
        return;
    }
        dfs(i+1,j);
        dfs(i,j+1);
        dfs(i-1,j);
        dfs(i,j-1);
        dfs(i+1,j+1);
        dfs(i-1,j-1);


}
bool check(int i,int j){
        if(graph[i+1][j]==s[k]&&i+1>=0&&j>=0&&i<=3&&j<=3);
            return true;
        if(graph[i][j+1]==s[k]&&i>=0&&j+1>=0&&i<=3&&j+1<=3);
            return true;
        if(graph[i-1][j]==s[k]&&i-1>=0&&j>=0&&i-1<=3&&j<=3);
            return true;
        if(graph[i][j-1]==s[k]&&i>=0&&j-1>=0&&i<=3&&j-1<=3);
            return true;
        if(graph[i+1][j+1]==s[k]&&i+1>=0&&j+1>=0&&i+1<=3&&j+1<=3);
            return true;
        if(graph[i-1][j-1]==s[k]&&i-1>=0&&j-1>=0&&i-1<=3&&j-1<=3);
            return true;
        return false;
}
void dfs1(int i,int j){
    if(i<0||j<0||i>3||j>3)
        return;
    if(graph[i][j]!=s[k])
        return;
    if(visit[i][j]==1) return;
    if(graph[i][j]==s[k]){
        //cout<<graph[i][j]<<endl;
        k++;
        dfs1(i+1,j);
        dfs1(i,j+1);
        dfs1(i-1,j);
        dfs1(i,j-1);
        dfs1(i+1,j+1);
        dfs1(i-1,j-1);
        visit[i][j]=1;
    }


}


int main(){
    int t,i,j,n,tc=1;
    freopen("input2.txt","r",stdin);
    cin>>t;
    while(t--){
        for(i=0;i<4;i++){
            getchar();
            cin>>graph[i];
            cout<<graph[i]<<endl;
        }
        cin>>n;
        while(n--){
            k=0;
            cin>>s;
            dfs(0,0);
            if(a>=0&&a<=3&&b>=0&&b<=3)
                dfs1(a,b);
            cout<<a<<" "<<b<<endl;
            int score=0;
            cout<<s<<" "<<k<<endl;
            if(k==s.size()){
                if(k==3||k==4)
                    score++;
                else if(k==5)
                    score+=2;
                else if(k==6)
                    score+=3;
                else if(k==7)
                    score+=5;
                else if(k>=8)score+=11;

            }
            cout<<"Score for Boggle game #"<<tc++<<score<<endl;
        }
    }

    return 0;
}
