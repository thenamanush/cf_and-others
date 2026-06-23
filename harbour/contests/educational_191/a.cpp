#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;

    int manual = (n + (x + y) - 1) / (x + y);

    int ans2 = 0, maxim = z * x;

    if (maxim >= n)
    {
        ans2 = (n + x - 1) / x;
    }
    else
    {
        int rem = n - maxim;
        ans2 = z + (rem + (x + 10 * y) - 1) / (x + 10 * y);
    }

    cout << min(manual, ans2) << endl;
}

int32_t main()
{
    alliswell

        int t = 1;
    cin >> t;
    while (t--)
        solve();
}