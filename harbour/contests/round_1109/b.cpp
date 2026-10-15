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
    vector<int> a(n);

    for (auto &x : a)
        cin >> x;
    bool f = true;
    int t = 0;
    for (int i = 0; i < n; ++i)
    {
        a[i] += t;
        t = a[i] - (i + 1);
        if (t < 0)
            f = false;
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