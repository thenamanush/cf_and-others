#include <bits/stdc++.h>
using namespace std;
#define arrlliswell                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;

    if (k < n || k > 2 * n - 1)
        return void(cout << -1 << endl);

    int s = 2 * n - k;
    int t = s - 1;
    int m = n - t;

    vector<vector<int>> a(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= t; i++)
        a[i][i] = i;

    int num = t + 1;
    for (int r = 1; r <= m; r++)
        for (int c = 1; c <= m; c++)
            a[t + r][t + c] = num++;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] == 0)
                a[i][j] = num++;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int32_t main()
{
    arrlliswell

        int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}