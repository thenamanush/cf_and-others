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
    ll n, k;
    cin >> n >> k;
    if (n == 1 && n == k)
    {
        cout << "1\n"
             << "1\n";
        return;
    }
    else if (k == 1 || k == n)
    {
        cout << -1 << nl;
        return;
    }
    else
    {
        ll l = k - 1, r = n - k;
        if ((l & 1) && (r & 1))
        {
            cout << 3 << nl;
            cout << 1 sp k sp k + 1 << nl;
        }
        else
        {
            cout << 5 << nl;
            cout << 1 sp 2 sp k sp k + 1 sp k + 2 << nl;
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