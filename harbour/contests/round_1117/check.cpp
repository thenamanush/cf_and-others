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

    vector<int> a(n + 1);

    for (int i = 2; i <= n; ++i)
        cin >> a[i];

    int m;
    cin >> m;

    vector<int> b(m);

    for (auto &x : b)
        cin >> x;

    vector<int> ans;

    int skip = 0;

    for (int x : b)
    {
        if (x == 1)
        {
            skip = x;
            break;
        }
    }

    if (!skip)
        skip = b[0];

    for (int x : b)
    {
        if (x != skip)
            ans.push_back(x);
    }

    cout << ans.size();

    for (auto x : ans)
        cout << ' ' << x;

    cout << endl;
}

int32_t main()
{
    alliswell

        int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}