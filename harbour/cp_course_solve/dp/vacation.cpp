#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'
const int N = 1e5 + 7;
int a[N], b[N], c[N];
int dp[N][4];
int n;

int points(int i, int last)
{
    if (i > n)
        return 0;
    int &ans = dp[i][last];
    if (ans != -1)
        return ans;
    for (int d = 0; d < 3; ++d)
    {
        if (d == last)
            continue;
        if (d == 0)
            ans = max(ans, a[i] + points(i + 1, 0));
        if (d == 1)
            ans = max(ans, b[i] + points(i + 1, 1));
        if (d == 2)
            ans = max(ans, c[i] + points(i + 1, 2));
    }
    return ans = dp[i][last];
}

int32_t main()
{
    alliswell

            cin >>
        n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << points(1, 3) << endl;
}