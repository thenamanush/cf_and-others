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
#define sz(x) (int)(x).size()
#define vi vector<int>
#define pi pair<int, int>
#define even(n) if (n % 2 == 0)
#define odd(n) if (n % 2 == 1)
#define sp << " " <<

#define alliswell                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    int n;
    cin >> n;
    int mx1 = 0, mx2 = 0;
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
        if (i % 2 == 0)
        {
            mx1 = max(mx1, a[i]);
        }
        else
        {
            mx2 = max(mx2, a[i]);
        }
    }
    // cout << mx1 sp mx2 << nl;
    if (n % 2 == 0)
    {
        cout << max((mx1 + n / 2), (mx2 + n / 2)) << endl;
    }
    else
    {
        cout << max((mx1 + n / 2 + 1), mx2 + n / 2) << endl;
    }
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