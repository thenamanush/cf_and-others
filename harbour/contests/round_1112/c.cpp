#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(4));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int ans = n; ans > 0; --ans)
    {
        int p = 0;
        for (int i = 0; i < n; ++i)
        {
            int left = p + 1;
            int right = ans - p;

            if ((left < a[i][0] || left > a[i][1]) &&
                (right < a[i][2] || right > a[i][3]))
            {
                ++p;
            }
            if (p == ans)
                return void(cout << ans << endl);
        }
    }
    cout << 0 << endl;
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