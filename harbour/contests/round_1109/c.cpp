#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n + 1);

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    if (is_sorted(a.begin() + 1, a.end()))
    {
        return void(cout << "YES" << endl);
    }
    // vector<int> dis;
    // for (int i = 1; i <= n; ++i)
    // {
    //     if (a[i] != i)
    //         dis.push_back(abs(a[i] - i));
    // }
    // bool f = true;
    // for (auto &d : dis)
    // {
    //     if (d % x != 0 and d % y != 0)
    //     {
    //         f = false;
    //     }
    // }
    // if (f)
    //     cout << "YES" << endl;
    // else if (gcd(x, y) == 1)
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;
    bool f = true;
    for (int i = 1; i <= n; ++i)
    {
        if (abs(a[i] - i) % gcd(x, y) != 0)
        {
            f = false;
        }
    }
    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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