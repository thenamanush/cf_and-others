#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'
const int mod = 998244353;

int mod_inv(int x)
{
    return x <= 1 ? x : mod - (mod / x) * mod_inv(mod % x) % mod;
}

int ncr(int n, int r)
{
    int lob = 1;
    for (int i = 1; i <= n; ++i)
        lob = (lob * i) % mod;
    int hor = 1;
    for (int i = 1; i <= r; ++i)
        hor = (hor * i) % mod;
    for (int i = 1; i <= n - r; ++i)
        hor = (hor * i) % mod;

    return (lob * mod_inv(hor)) % mod;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt_zero = count(s.begin(), s.end(), '0'), cnt_one = n - cnt_zero;

    string b;
    for (char c : s)
    {
        if (b.empty() || b.back() != c)
            b += c;
    }

    int seg_zero = count(b.begin(), b.end(), '0'), seg_one = b.size() - seg_zero;

    // cout << cnt_one << ' ' << cnt_zero << endl;
    // cout << seg_one << ' ' << seg_zero << endl;

    cnt_one--, cnt_zero--, seg_one--, seg_zero--;
    int ans = ncr(cnt_zero, seg_zero) * ncr(cnt_one, seg_one);
    ans %= mod;

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