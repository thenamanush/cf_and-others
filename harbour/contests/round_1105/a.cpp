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

    int ans = 0;

    for (int b = 1; b <= n; b <<= 1)
    {
        int take = min(k, n / b);
        ans += take;
        n -= take * b;
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