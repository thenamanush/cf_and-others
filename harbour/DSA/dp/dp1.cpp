#include <bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &dp)
{
    if (n <= 1)
        return n;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}

// space optimized and tabulation method
int tab(int n, vector<int> & dp){
    int prev2 = 0, prev1 = 1, cur = 0;
    for(int i = 2; i <= n; ++i){
        cur = prev2 + prev1;
        prev2 = prev1;
        prev1 = cur;
    }
    return prev1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << fib(n, dp) << endl;
    cout << tab(n, dp) << endl;
}