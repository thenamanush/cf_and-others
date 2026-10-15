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
    if (k > n - 2)
        return void(cout << -1 << endl);

    int t = n - k - 2;
    for (int i = 0; i < t; ++i)
    {
        if (i & 1)
            cout << '1';
        else
            cout << '0';
    }
    if ((n & 1) != 1 && (k & 1) != 1)
    {
        cout << string(k / 2 + 1, '0') << string(k / 2 + 1, '1') << endl;
    }
    else if ((n & 1) != 1 && (k & 1))
    {
        cout << string(k / 2 + 2, '1') << string(k / 2 + 1, '0') << endl;
    }
    else if (n & 1 && (k & 1) != 1)
    {
        cout << string(k / 2 + 1, '1') << string(k / 2 + 1, '0') << endl;
    }
    else
    {
        cout << string(k / 2 + 2, '0') << string(k / 2 + 1, '1') << endl;
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