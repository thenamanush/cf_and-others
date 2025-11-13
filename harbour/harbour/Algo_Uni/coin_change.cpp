#include <bits/stdc++.h>
using namespace std;
#define inf 1000000000

// coin change
int coin_change(int n, int t, int a[])
{
    // vector<int> dp(t + 1, INT_MAX);
    // dp[0] = 0;

    // for (int i = 1; i <= t; i++)
    //     for (int j = 0; j < n; j++)
    //         if (i >= a[j])
    //             dp[i] = min(dp[i], dp[i - a[j]] + 1);

    // return dp[t] == INT_MAX? -1 : dp[t];

    int mat[n + 1][t + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= t; j++)
        {
            if (i == 0)
                mat[i][j] = inf;
            if (j == 0)
            {
                mat[i][j] = 0;
            }
            else
            if (a[i] > j)
            {
                mat[i][j] = mat[i - 1][j];
            }
            else{
                mat[i][j] = min(mat[i - 1][j], 1 + mat[i][j - a[i]]);
            }
        }
    }
    int i = n;
    int j = t;
    while(i>0 && j>0)
    {
        if(mat[i][j] == mat[i-1][j])
            i--;
        else
        {
            cout << a[i-1] << " ";
            j -= a[i-1];
        }
    }
    return mat[n][t];
}

int main()
{
    int n = 3;
    int coins[] = {1, 2, 5};
    int t = 7;

    int ans = coin_change(n, t, coins);
    cout << ans << endl;

    return 0;
}