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

    vector<int> par(n + 1);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        par[x] = i % 2;
    }

    int d = 0;
    for (int v = n; v >= 1; v--)
    {
        d += par[v] ? 1 : -1;
        if (abs(d) > 1)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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