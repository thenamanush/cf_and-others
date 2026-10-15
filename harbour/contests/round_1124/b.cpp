#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

int sq(int x)
{
    int s = 0;
    while (x)
    {
        int d = x % 10;
        s += d * d;
        x /= 10;
    }
    return s;
}

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int k = 0; k < 20; k++)
            x = sq(x);
        mp[x]++;
    }

    int ans = 0;
    for (auto &[x, y] : mp)
        ans += y * (y - 1) / 2;
    cout << ans << endl;
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
