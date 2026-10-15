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
    if (y - x > 1)
        return void(cout << -1 << endl);

    if ((x - y) % 2 == 0)
        cout << x << endl;
    else
        cout << x + 1 << endl;
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