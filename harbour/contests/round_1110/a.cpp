#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if (2 * k > n)
        return void(cout << -1 << endl);
    int ans = 0;
    for (int i = 0; i < k; ++i)
    {
        if (s[i] != 'R')
            ans++;
    }
    for (int i = n - 1; i + k >= n; --i)
    {
        if (s[i] != 'L')
            ans++;
    }
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