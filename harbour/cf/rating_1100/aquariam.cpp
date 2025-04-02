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
    ll n, x;
    cin >> n >> x;
    vi a(n);
    rep(i, n) cin >> a[i];

    if (n == 1)
    {
        cout << a[0] + x << nl;
        return;
    }


    ll lo = 0, hi = *max_element(a.begin(), a.end()) + x, ans = 0;
    while (lo <= hi)
    {
        ll mid = lo + (hi - lo) / 2;
        ll cnt = 0;
        rep(i, n)
        {
            if (a[i] - mid < 0)
            {
                cnt += abs(a[i] - mid);
            }
        }
        if (cnt > x)
        {
            hi = mid - 1;
        }
        else
        {
            ans = mid;
            lo = mid + 1;
        }
    }
    cout << ans << nl;
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