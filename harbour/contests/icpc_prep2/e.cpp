#include <bits/stdc++.h>
using namespace std;

#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int k;
    cin >> k;

    int n = -1, m = -1;

    for (int i = 5; i * i <= k; ++i)
    {
        if (k % i == 0 && k / i >= 5)
        {
            n = i;
            m = k / i;
            break;
        }
    }

    if (n == -1)
    {
        cout << -1 << endl;
        return;
    }

    string ans = "aeiou";

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << ans[(i + j) % 5];
        }
    }

    cout << endl;
}

int32_t main()
{
    alliswell

    solve();

    return 0;
}