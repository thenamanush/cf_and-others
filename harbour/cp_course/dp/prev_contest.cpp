#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

const int N = 2 * 1e5 + 7;
int dp[N], a[N];
int n, k;

int choc(int i)
{
    if (i > n)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int ans = max(a[i] + choc(i + k), choc(i + 1));
    return dp[i] = ans;
}

void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    memset(dp, -1, sizeof(dp));
    cout << choc(k) << endl;
}

int32_t main()
{
    alliswell

        int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}