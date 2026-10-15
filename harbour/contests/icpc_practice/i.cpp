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

    int ans = 0;
    for (auto &[x, y] : mp)
    {
        if (y > 1)
        {
            ans += y - 1;
            mp[x + 1] += y - 1;
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    alliswell

        int t = 1;
    // cin >> t; while(t--)
    solve();
}