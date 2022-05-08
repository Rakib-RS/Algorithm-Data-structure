#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    s = "10[a]";
   string decode="";
   
   stack<char>st;
   string part;
   st.push('[');
   int i = 0;
   int k;
   while(!st.empty() && i<s.size()){
       //cout<<i<<endl;
       if(s[i]== ']'){
          i++;
           part = "";
           while(st.top() != '['){
               part += st.top();
               st.pop();
           }
           int count = 1;
           st.pop();
           k =0;
           while(st.top()>='0' && st.top()<='9'){
               //cout<<st.top()<<endl;
               k =  k + (st.top()-'0')*count;
               count = count*10;
               st.pop();
           }
           while(k--){
               for(int j =part.size()-1;j>=0;j--){
                   st.push(part[j]);
               }
           }
       }
       else st.push(s[i++]);
   }
   decode ="";
    while(st.top() != '['){
        decode += st.top();
        st.pop();
    }
    reverse(decode.begin(),decode.end());
    cout<<decode<<endl;
    
    return 0;
}