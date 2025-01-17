#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define MOD 1000000007
#define pie 2 * (acos(0.0))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define nl '\n'
#define lcm(a, b) (a * b) / (__gcd<ll>(a, b))
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

vector<ll> best3(const vector<ll> &ar)
{
    int mx1 = -1, mx2 = -1, mx3 = -1;
    rep(i, ar.size())
    {
        if (mx1 == -1 || ar[i] > ar[mx1])
        {
            mx3 = mx2;
            mx2 = mx1;
            mx1 = i;
        }
        else if (mx2 == -1 || ar[i] > ar[mx2])
        {
            mx3 = mx2;
            mx2 = i;
        }
        else if (mx3 == -1 || ar[i] > ar[mx3])
        {
            mx3 = i;
        }
    }
    return {mx1, mx2, mx3};
}
void solve()
{
    ll n;
    cin >> n;
    vi a(n), b(n), c(n);

    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n) cin >> c[i];

    vector<ll> bestA = best3(a);
    vector<ll> bestB = best3(b);
    vector<ll> bestC = best3(c);

    ll ans = 0;
    for (auto &x : bestA)
    {
        for (auto &y : bestB)
        {
            for (auto &z : bestC)
            {
                if (x != y && x != z && y != z)
                {
                    ans = max(ans, a[x] + b[y] + c[z]);
                }
            }
        }
    }
    cout << ans << nl;
}
int main()
{
    alliswell

        int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}