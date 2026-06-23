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
    for (int i = 1; i <= n; ++i)
    {
        if (i > 1)
            cout << i << ' ' << i << ' ';
        else
            cout << i << ' ';
    }
    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
            cout << i << ' ' << i << ' ';
        else
            cout << i << ' ';
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << i << ' ';
    }
    cout << endl;
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