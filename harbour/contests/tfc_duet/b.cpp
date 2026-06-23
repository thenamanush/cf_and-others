#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'
const int N = 2 * 1e5 + 7;
int a[N];
int n, t;
int calc(int x)
{
    int s = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] % x == 0)
            s += a[i] / x;
        else
            s += a[i] / x + 1;
    }
    return s;
}

void solve()
{
    cin >> n >> t;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int l = 1, h = 1e18, ans = 0;
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (calc(m) <= t)
        {
            ans = m;
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    alliswell

    solve();
}