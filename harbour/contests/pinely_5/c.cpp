#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pie 2 * (acos(0.0))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define nl '\n'
#define lcm(a, b) (a * b) / (gcd<ll>(a, b))
#define print(v)          \
    for (auto e : v)      \
        cout << e << " "; \
    cout << endl;
#define printp(v)    \
    for (auto e : v) \
        cout << e.first << " " << e.second << endl;
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rrep(i, n) for (int i = (n) - 1; i >= 0; i--)
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define RFOR(i, a, b) for (int i = (a); i >= (b); i--)
#define trav(a, x) for (auto &a : x)
#define F first
#define S second
#define setbit(x) __builtin_popcount(x)
#define sz(x) (int)(x).size()
#define vi vector<long long>
#define pi pair<int, int>
#define even(n) if (n % 2 == 0)
#define odd(n) if (n % 2 == 1)
#define sp << " " <<

#define alliswell                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    ll n, x;
    cin >> n >> x;
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    srt(a);

    // prefix sum
    vector<ll> pre(n + 1, 0);
    for (int i = 0; i < n; ++i)
        pre[i + 1] = pre[i] + a[i];

    //print(pre);

    // suffix sum
    vector<ll> suf(n + 1, 0);
    for (int i = n - 1; i >= 0; --i)
        suf[i] = suf[i + 1] + a[i];

    // find highest index from left where suffix sum >= x
    int lo = 0, hi = n;
    while (lo < hi)
    {
        int mid = (lo + hi) / 2;
        if (suf[mid] >= x)
            lo = mid + 1;
        else
            hi = mid;
    }
    int in = lo - 1; // last index where suf[idx] >= x
    ll res = suf[0] - suf[in];
    // print(suf);

    int it = lower_bound(pre.begin(), pre.end(), x) - pre.begin() - 1;
    ll res1 = pre[n] - pre[it];

    cout << max(res, res1) << nl;
}

int main()
{
    alliswell

        int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}