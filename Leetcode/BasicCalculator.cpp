#include <bits/stdc++.h>
using namespace std;
int strToInt(string s)
{
    int i = 0, j = 0, sum = 0;
    if (s[i] == '-')
    {
        j = 1;
        i++;
    }
    for (i = i; i < s.size(); i++)
    {
        sum = sum * 10 + (s[i] - '0');
    }
    return (j) ? -sum : sum;
}
string intToStr(int a)
{
    int b = a;
    string s = "";
    int r;

    while (a)
    {
        r = a % 10;

        if (r < 0)
            r = -r;
        s += (r + '0');
        a = a / 10;
    }
    if (b < 0)
        s += '-';
    if (b == 0)
        s += '0';
    reverse(s.begin(), s.end());
    return s;
}
int main()
{
    string s;
    s = "1-(3+5-2+(3+19-(3-1-4+(9-4-(4-(1+(3)-2)-5)+8-(3-5)-1)-4)-5)-4+3-9)-4-(3+2-5)-10";
    stack<char> st;
    st.push('(');
    s += ')';
    cout << s << endl;
    string number;
    string pa;
    char c;
    int i = 0, j, k;
    int result;
    int ans;
    char op;
    while (i < s.size())
    {
       // cout << s[i] << " ";
        if (s[i] == ' ')
        {
            i++;
            continue;
        }
        else if (s[i] == ')')
        {
            number = "";
            op = ' ';
            vector<int> vc;
            int sum = 0;
            while (st.top() != '(')
            {
                c = st.top();
                //cout << c << "_" << sum << " ";
                st.pop();
                if (c >= '0' && c <= '9')
                {
                    number += c;
                }
                else
                {
                    if (number != "")
                    {
                        reverse(number.begin(), number.end());
                        result = strToInt(number);
                        number = "";
                        if (c == '-')
                        {
                            result = -result;
                        }
                        sum += result;
                    }
                    else{
                        if(c=='-')
                        sum = -sum;
                    }
                }
            }
            reverse(number.begin(), number.end());
            result = strToInt(number);
            sum += result;
            //cout<<sum<<endl;
            st.pop();
            if(sum<0 &&!st.empty()&& (st.top()=='+' || st.top()=='-')){
                //cout<<"ok";
                if(st.top()=='-'){
                    sum = -sum;
                    st.pop();
                    st.push('+');
                }
                else 
                  st.pop();
            }
            pa = intToStr(sum);
            j = 0;
            
            
            while (j < pa.size())
            {
                // cout<<pa[j]<<" ";
                st.push(pa[j]);
                j++;
            }

            //cout << pa << endl;
        }
        else
            st.push(s[i]);
        i++;
    }
    cout << pa << endl;
    return 0;
}
// else if ((c == '+' || c == '-') && op == ' ')
// {
//     reverse(number.begin(), number.end());
//     result = strToInt(number);
//     number = "";
//     ans = result;
//     if (c == '+')
//         op = '+';
//     else
//         op = '-';
//     st.pop();
// }
// else
// {
//     reverse(number.begin(), number.end());

//     result = strToInt(number);
//     if (op == '+')
//         ans += result;
//     else
//         ans = result - ans;
//     if(c== '+') op = '+';
//     else op = '-';
//     st.pop();
//     number = "";
// }