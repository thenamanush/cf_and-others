#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, x, y, k;
    cin >> n >> x >> y >> k;
    /*
    -> maintaining the same pos for chaser is not optimal
    -> staying at the same position might help the runner

    * if no moves available, shortest distance will be the answer
    * if moves are available, hold is gonna increase the answer
    * ans is always 1 if n <= 3
    */
    if (k == 0)
    {
        int dis1 = abs(x - y);
        int dis2 = n - max(x, y) + min(x, y);

        cout << min(dis1, dis2) << endl;
        return;
    }
    if (n <= 3)
        return void(cout << 1 << endl);
    else
    {
        int dis1 = abs(x - y);
        int dis2 = n - max(x, y) + min(x, y);

        cout << min(dis1, dis2) + k << endl;
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