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
#define lcm(a, b) (a * b) / (std::gcd<ll>(a, b))
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
    ll n, k;
    cin >> n >> k;
    vi a(n);
    ll mx = LLONG_MIN, mn = LLONG_MAX, sum = 0;
    rep(i, n)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
        sum += a[i];
    }
    if (k + 1 < (mx - mn))
    {
        cout << "Jerry" << nl;
        return;
    }
    if (k >= (mx - mn))
    {
        if (sum % 2 == 0)
        {
            cout << "Jerry" << nl;
        }
        else
        {
            cout << "Tom" << nl;
        }
    }
    if (mx - mn == (k + 1))
    {
        ll mx_cnt = 0;

        rep(i, n)
        {
            if (a[i] == mx)
            {
                mx_cnt++;
            }
        }
        if (mx_cnt > 1)
        {
            cout << "Jerry" << nl;
        }
        else if (sum % 2 == 0)
        {
            cout << "Jerry" << nl;
        }
        else
        {
            cout << "Tom" << nl;
        }
    }
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