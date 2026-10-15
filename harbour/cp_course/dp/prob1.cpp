#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int dp[N];

int min_step(int i)
{
    if (i == 1)
        return 0;
    if (dp[i] != -1)
        return dp[i];

    int ans = min_step(i - 1) + 1;
    if (i % 2 == 0)
        ans = min(ans, min_step(i / 2) + 1);
    if (i % 3 == 0)
        ans = min(ans, min_step(i / 3) + 1);

    return dp[i] = ans;
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    cout << min_step(n) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}