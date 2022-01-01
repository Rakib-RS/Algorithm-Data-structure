#include <bits/stdc++.h>
using namespace std;
bool** dp;
long long int cont = 0;
void printSubsetsRec(int arr[], int i, int sum, vector<int>& p)
{
    if (i == 0 && sum != 0 && dp[0][sum])
    {
        p.push_back(arr[i]);
        cont++;
        return;
    }

    if (i == 0 && sum == 0)
    {
        cont++;
        return;
    }

    if (dp[i-1][sum])
    {
        vector<int> b = p;
        printSubsetsRec(arr, i-1, sum, b);
    }

    if (sum >= arr[i] && dp[i-1][sum-arr[i]])
    {
        p.push_back(arr[i]);
        printSubsetsRec(arr, i-1, sum-arr[i], p);
    }
}

void printAllSubsets(int arr[], int n, int sum)
{
    if (n == 0 || sum < 0)
       return;

    dp = new bool*[n];
    for (int i=0; i<n; ++i)
    {
        dp[i] = new bool[sum + 1];
        dp[i][0] = true;
    }
    if (arr[0] <= sum)
       dp[0][arr[0]] = true;

    for (int i = 1; i < n; ++i)
        for (int j = 0; j < sum + 1; ++j)
            dp[i][j] = (arr[i] <= j) ? dp[i-1][j] ||
                                       dp[i-1][j-arr[i]]
                                     : dp[i - 1][j];
    if (dp[n-1][sum] == false)
    {
        return;
    }
    vector<int> p;
    printSubsetsRec(arr, n-1, sum, p);
}

int main()
{
    long long int n,i,sum=0,a,b;
    cin>>n;
    int arr[n+1];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    b=0;
    for(i=1;i<=sqrt(sum);i++){
        if(sum%i==0){
            a=sum/i;
            cont=0;
            printAllSubsets(arr, n, a);
            b=max(cont,b);
            cont=0;
            printAllSubsets(arr, n, i);
            b=max(cont,b);
        }
    }

    cout<<b<<endl;
    return 0;
}
