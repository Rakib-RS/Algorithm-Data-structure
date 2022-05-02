#include<bits/stdc++.h>
using namespace std;
string mul[200];
string multiply(string s1,string s2){
    string result="";
    int count = 0;
    for(int i = s2.size()-1;i>=0;i--){
        int sum,carry = 0;
        int l = count;
        string r ="";
        while(l--){
            r += "0";
        }
        count++;
        for(int j = s1.size()-1 ;j>=0;j--){
            sum = (s2[i]-'0')*(s1[j]-'0') + carry;
            
            carry = sum/10;
            sum = sum%10;
            //cout<<sum<<endl;
            r += (sum +'0');
        }
        if(carry) r += (carry +'0');
        cout<<r<<" "<<result<<endl;;
        if(i == s2.size()-1){
            result = r;
        }
        else{
            carry = 0;
            int k;
            for( k = 0;k<r.size();k++){
                if(k<result.size()){
                    sum = (r[k]-'0')+(result[k]-'0')+carry;
                    carry = sum/10;
                    sum = sum%10;
                    result[k] = (sum+'0');
                }
                else{
                     sum = (r[k]-'0')+carry;
                    carry = sum/10;
                    sum = sum%10;
                    result += (sum+'0');
                }
            }
            if(k<result.size()){
                for(k = k;k<result.size();k++){
                    sum = (result[k]-'0')+carry;
                    carry = sum/10;
                    sum = sum%10;
                    result[k]= (sum + '0');
                }
                if(carry){
                    int reverse =0;
                    while(carry){
                        reverse = reverse*10 + carry%10;
                        carry = carry/10;
                    }
                    result += (reverse + '0');
                }
            }
            else{
                if(carry){
                    int reverse =0;
                    while(carry){
                        reverse = reverse*10 + carry%10;
                        carry = carry/10;
                    }
                    result += (reverse + '0');
                }
            }
        }
    }
   reverse(result.begin(),result.end());
   return result[0]=='0' ? "0":result;
}
int main(){
    string s1,s2,ans;
    //cin>>s1>>s2;
    s1 = "900000000000000000000000000000000000000000000000000000000";
    s2 = "0";
    cout<<s1<<" "<<s2<<endl;
    ans = multiply(s1,s2);
    cout<<ans<<endl;
    return 0;
}