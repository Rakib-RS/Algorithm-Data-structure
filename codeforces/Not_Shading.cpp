#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m,r,c,total,ch,s2,i,j,s1;
    cin>>t;
    while (t--){
        cin>>n>>m>>r>>c;
        string s[n+1];
        for(i=0;i<n;i++){
            cin>>s[i];

        }
        ch = 0;s1 = 0;s2=0;
        for ( i = 0; i < n; i++){
            for(j =0;j<m;j++){
                if(s[i][j]=='B'){
                    ch = 1;
                }
                if(s[i][j]== 'B' && i == r-1 && j == c-1){
                    s2 = 1; break;
                }
                if((s[i][j]=='B'&& i == r-1)|| (j == c-1 && s[i][j]=='B')){
                    s1 = 1;
                   
                   
                }
            }
           
        }
        if(ch){
            if(s2) cout<<"0"<<endl;
            else if(s1) cout<<s1<<endl;
            else cout<<"2"<<endl;
        }
        else cout<<"-1"<<endl;
        

    }
    

    return 0;
}