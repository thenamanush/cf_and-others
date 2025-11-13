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
    ll n;
    cin >> n;
    ll mx = INT_MIN, mn = INT_MAX, mx_in = 0, mn_in = 0;
    ;
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] > mx)
        {
            mx = a[i];
            mx_in = i;
        }
        if (a[i] < mn)
        {
            mn = a[i];
            mn_in = i;
        }
    }
    string s;
    cin >> s;

    if (s[0] == '1' || s[n - 1] == '1')
    {
        cout << -1 << nl;
        return;
    }
    for (int i = 1; i < n - 1; ++i)
    {
        if (a[i] == mx && s[i] == '1')
        {
            cout << -1 << nl;
            return;
        }
        if (a[i] == mn && s[i] == '1')
        {
            cout << -1 << nl;
            return;
        }
    }

    mx_in++;
    mn_in++;

    cout << 5 << nl;
    cout << 1 sp mn_in << nl;
    cout << 1 sp mx_in << nl;
    cout << mx_in sp n << nl;
    cout << mn_in sp n << nl;
    if (mn_in < mx_in)
    {
        cout << mn_in sp mx_in << nl;
    }
    else
    {
        cout << mx_in sp mn_in << nl;
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