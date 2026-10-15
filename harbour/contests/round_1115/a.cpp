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
    map<int, int> mp;

    for (auto &x : a)
    {
        cin >> x;
        mp[x]++;
    }

    int sum = accumulate(a.begin(), a.end(), 0ll);
    int mx = 0, v = 0;

    for (auto [x, y] : mp)
    {
        if (y > mx)
        {
            mx = y;
            v = x;
        }
    }

    int left = n - mx;

    if (mx <= left + 1)
        return void(cout << sum << endl);

    int z = mx - (left + 2);
    cout << sum - z * v << endl;
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