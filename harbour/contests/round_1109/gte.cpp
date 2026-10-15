#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    vector<int> c(n + 1), P1(n + 1, 0), P0(n + 1, 0);
    for (int i = 1; i <= n; i++)
        c[i] = (s[i - 1] - '0') ^ (i % 2);

    for (int i = 2; i <= n; i++)
    {
        int g1 = (c[i] == 1 && c[i - 1] == 0) ? 1 : 0;
        int g0 = (c[i] == 0 && c[i - 1] == 1) ? 1 : 0;
        P1[i] = P1[i - 1] + g1;
        P0[i] = P0[i - 1] + g0;
    }
    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;

        int b1 = (c[l] == 1 ? 1 : 0) + (P1[r] - P1[l]);
        int b0 = (c[l] == 0 ? 1 : 0) + (P0[r] - P0[l]);

        int ops = min(b1, b0);
        cout << (ops <= k ? "YES" : "NO") << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}