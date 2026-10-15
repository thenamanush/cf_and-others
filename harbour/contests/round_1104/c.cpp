#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int N = 2e5 + 7;
int a[N], dp[N];

// int mx(int i)
// {
//     if (i == 0)
//         return dp[0] = a[0];

//     if (dp[i] != -1)
//         return dp[i];

//     int prev = mx(i - 1);

//     if (a[i] >= prev)
//         dp[i] = a[i];
//     else
//         dp[i] = a[i] + prev;

//     return dp[i];
// }

int mx(int i)
{
    if (i == 0)
        return dp[i] = a[i];
    if (dp[i] != -1)
        return dp[i];
    if (a[i] < mx(i - 1))
        dp[i] = a[i] + mx(i - 1);
    else
        dp[i] = a[i];
    return dp[i];
}

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int ans = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (a[i + 1] < a[i])
        {
            swap(a[i], a[i + 1]);
            a[i + 1] = a[i] + a[i + 1];
        }
    }
    cout << a[n - 1] << endl;

    // memset(dp, -1, sizeof(dp));

    // cout << mx(n - 1) << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
}