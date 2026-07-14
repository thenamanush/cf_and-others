#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];
    for (int i = 0; i < n; ++i)
        cin >> c[i];

    int ans = n, res = 0;
    for (int i = 0; i < n; ++i)
    {
        bool ok = true;
        for (int j = 0; j < n; ++j)
        {
            if (a[j] >= b[(i + j) % n])
            {
                ok = false;
                break;
            }
        }
        res += ok;
    }
    ans *= res;
    res = 0;
    for (int i = 0; i < n; ++i)
    {
        bool ok = true;
        for (int j = 0; j < n; ++j)
        {
            if (b[j] >= c[(i + j) % n])
            {
                ok = false;
                break;
            }
        }
        res += ok;
    }
    cout << ans * res << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}