#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int x;
    cin >> x;

    int p = 1;
    int tmp = x;
    while (tmp)
    {
        p *= 10;
        tmp /= 10;
    }

    cout << p + 1 << '\n';
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