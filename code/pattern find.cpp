#include<bits/stdc++.h>
using namespace std;
vector<int>vc;

#define d 256


void search(string pat, string txt, int q)
{
    int cnt = 0;
    int M = pat.size();
    int N = txt.size();
    int i, j;
    int p = 0; // hash value for pattern
    int t = 0; // hash value for txt
    int h = 1;

    for (i = 0; i < M-1; i++)
        h = (h*d)%q;


    for (i = 0; i < M; i++)
    {
        p = (d*p + pat[i])%q;
        t = (d*t + txt[i])%q;
    }

    for (i = 0; i <= N - M; i++)
    {


        if ( p == t )
        {
            for (j = 0; j < M; j++)
            {
                if (txt[i+j] != pat[j])
                    break;
            }

            if (j == M)
            {
                cnt++;
                vc.push_back(i + 1);
            }
        }


        if ( i < N-M )
        {
            t = (d*(t - txt[i]*h) + txt[i+M])%q;


            if (t < 0)
            t = (t + q);
        }
    }
    if(cnt)
        cout << cnt << endl;
    else
        cout << "Not Found" << endl;
    for(int i = 0; i < vc.size(); i++)
    {
        if(i != vc.size()- 1)
        printf("%d ", vc[i]);
        else
         printf("%d\n", vc[i]);
    }
    vc.clear();
    cout << endl;

}

int main()
{

    int t;
    cin >> t;
    string pat, txt;
    while(t--)
    {
        int q = 101; // A prime number
        cin >> txt >> pat;
        search(pat, txt, q);
    }

    return 0;
}

