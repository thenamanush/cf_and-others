#include <bits/stdc++.h>
using namespace std;

#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

const int N = 2 * 1e5 + 7;
const int INF = 1e18;

int dp[N];
int a[N];

int ans(int n)
{
    if (n == 0)
        return 0;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = INF;

    vector<int> div;

    for (int i = 1; i * i <= a[n]; ++i)
    {
        if (a[n] % i == 0)
        {
            div.push_back(i);

            if (i * i != a[n])
                div.push_back(a[n] / i);
        }
    }

    for (auto &d : div)
    {
        if (n - d >= 0)
        {
            dp[n] = min(dp[n], ans(n - d) + 1);
        }
    }

    return dp[n];
}

void solve()
{
    memset(dp, -1, sizeof(dp));

    int n;
    cin >> n;

    for (int i = 0; i <= n; ++i)
        cin >> a[i];

    cout << ans(n) << endl;
}

int32_t main()
{
    alliswell

    solve();

    return 0;
}