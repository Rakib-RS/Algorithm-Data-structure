#include<iostream>
using namespace std;

int main()
{
    long int n, t, i, j;
    cin >> t;
    for(i = 1; i <= t; i++)
    {
        cin >> n;
        j = n;
        while(j++)
        {
            if(__builtin_popcount(n) != __builtin_popcount(j))
            {
              continue;
            }
            else
              cout << "Case " << i << ": " << j << endl;
              break;
        }
    }

    return 0;
}
