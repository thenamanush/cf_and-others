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
    string a, b;
    cin >> a >> b;

    vector<int> o, e, odd, even;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == '1')
        {
            if (i & 1)
                e.push_back(i + 1);
            else
                o.push_back(i + 1);
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (b[i] == '1')
        {
            if (i & 1)
                even.push_back(i + 1);
            else
                odd.push_back(i + 1);
        }
    }
    if (o.size() != odd.size() || e.size() != even.size())
    {
        cout << -1 << endl;
    }
    else
    {
        sort(o.begin(), o.end());
        sort(odd.begin(), odd.end());
        sort(e.begin(), e.end());
        sort(even.begin(), even.end());
        int ans = 0;

        for (int i = 0; i < o.size(); ++i)
        {
            ans += abs(o[i] - odd[i]) / 2;
        }
        for (int i = 0; i < e.size(); ++i)
        {
            ans += abs(e[i] - even[i]) / 2;
        }
        cout << ans << endl;
    }
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