#include<iostream>
using namespace std;
string s[110];
int n,m;
int ans;
bool visited[110][110];
void bfs(int i,int j){
    if(i<0 || j<0) return;
    if(i>=n || j>=m) return;
    if(visited[i][j] || s[i][j]!='W') return;
    ans++;
    visited[i][j] = true;
    for(int x = -1;x<=1;x++){
        for(int y = -1;y<=1;y++){
            bfs(i+x,j+y);
        }
    }


}
void clear(){
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++) visited[i][j] = false;
    }
}
int main(){
    int t,i,j,k;
    string str;
    //freopen("input.txt","r",stdin);
    cin>>t;
    getchar();
     getchar();
    k =1;
    while(t--){
        
        //cout<<t<<endl;
        n= 0;
        while(getline(cin,str)){
           
            if(str.empty()) break;
            //cout<<str<<endl;
            if(str[0]!='W' && str[0]!='L'){
                string s1,s2;
                i =0;
                j =0;bool tt = false;
                for(k = 0;k<str.size();k++){
                    if(str[k] == ' '){
                        tt = true;
                        continue;
                    }
                    if(tt){
                        j = j*10 + (str[k]-'0');
                    }
                    else{
                        i = i*10 + (str[k]-'0');
                    }
                }
                //cout<<i<<" "<<j<<endl;
                clear();
                ans = 0;
                bfs(i-1,j-1);
                printf("%d\n",ans);
            }
            else {
                s[n++] = str;
                m = str.size();
            }
            
        }
        if(t) printf("\n");
    }
    return 0;
}