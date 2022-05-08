   part = "";
           while(st.top() != '['){
               part += st.top();
               st.pop();
           }
           int count = 1;
           st.pop();
           k =0;
           while(st.top()>='0' && st.top()<='9'){
               k = k*count + (st.top()-'0');
               count = count*10;
               st.pop();
           }
           while(k--){
               for(int j =0;j<part.size();j++){
                   st.push(part[j]);
               }
           }