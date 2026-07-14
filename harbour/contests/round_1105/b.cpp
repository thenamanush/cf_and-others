#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'
const int M = 998244353;

int binpow(int a, int b)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % M;
        a = a * a % M;
        b >>= 1;
    }
    return res;
}

void solve()
{
    int n, m, r, c;
    cin >> n >> m >> r >> c;

    int t = (n - r + 1) * (m - c + 1);
    int p = n * m - t;

    cout << binpow(2, p) << endl;
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