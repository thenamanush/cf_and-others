#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int x, y;
    cin >> x >> y;

    int ans = x + y;
    int a = 0;
    bool f = true;
    for (int i = 30; i >= 0 && f; i--)
    {
        int xi = (x >> i) & 1;
        int si = (ans >> i) & 1;
        if (xi == 1)
        {
            if (si == 1)
            {
                a |= (1LL << i);
            }
            else
            {
                f = false;
                a |= (ans & ((1LL << i) - 1));
            }
        }
    }
    cout << ans << ' ' << x - a << endl;
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
