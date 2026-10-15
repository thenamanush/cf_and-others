#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'
const int M = 1e9 + 7;

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

    int ans = 1;
    for (auto [x, y] : mp)
    {
        ans = (ans * (y + 1)) % M;
    }
    cout << ans - 1 << endl;
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