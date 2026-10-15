#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, ans = 0;
    cin >> n;
    for (int i = n; i > 1; --i)
    {
        for (int j = i - 1; j >= 1; --j)
        {
            if ((i * j) % (i - j) == 0)
                ans++;
        }
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