#include<bits/stdc++.h>
using namespace std;
int strToInt(string s){
    int i=0,j=0,sum= 0;
    if(s[i]=='-'){
        j = 1;
        i++;
    }
    for(i =i ;i<s.size();i++){
        sum = sum*10 + (s[i]-'0');
    }
    return (j)? -sum:sum;
        
}
int main(){
   vector<string>tokens{"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
   int i,j,k;
   stack<int>st;
   i = 0;
   st.push(strToInt(tokens[i]));
   i++;
   int ans;
   while(i<tokens.size()){
       //cout<<tokens[i]<<" ";
       if(tokens[i]=="+" || tokens[i]== "-" || tokens[i] == "*" || tokens[i]=="/" ){
           j = st.top();
           st.pop();
           k = st.top();
           st.pop();
           if(tokens[i]=="+") st.push(j+k);
           else if(tokens[i]=="-") st.push(k-j);
           else if(tokens[i]== "*") st.push(j*k);
           else st.push(k/j);
           i++;
       }
       else if(i<tokens.size()){
           st.push(strToInt(tokens[i]));
           i++;
       }
       
   }
   //cout<<endl;
   ans = st.top();
   cout<<ans<<endl;
    return 0;
}