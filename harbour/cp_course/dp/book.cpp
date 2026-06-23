#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'
const int N = 1e3 + 5, M = 1e5 + 7;
int dp[N][M], pr[N], pg[N];
int n, k;

int page(int i, int m)
{
    if (i == n + 1)
        return 0;

    if (dp[i][m] != -1)
        return dp[i][m];

    int ans = page(i + 1, m);

    if (pr[i] <= m)
        ans = max(ans,
                  page(i + 1, m - pr[i]) + pg[i]);

    return dp[i][m] = ans;
}

int32_t main()
{
    alliswell

        memset(dp, -1, sizeof(dp));
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> pr[i];
    for (int i = 1; i <= n; ++i)
        cin >> pg[i];

    cout << page(1, k) << endl;
}