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
    /* from the river to the sea
     Palestine will be free */

    ll n, k;
    cin >> n >> k;
    if (k == 1 && n == 1)
    {
        cout << 1 << nl;
        cout << 1 << nl;
        return;
    }
    if ((n + 1) / 2 == k)
    {
        cout << 1 << nl;
        cout << 1 << nl;
        return;
    }
    else
    {
        if (k == 1)
        {
            cout << -1 << nl;
            return;
        }
        if (k % 2 == 0)
        {
            cout << k + 1 << nl;
            FOR(i, 1, k)
            {
                cout << i << " ";
            }
            cout << k + 1 << nl;
        }
        else
        {
            cout << k + 2 << nl;
            FOR(i, 1, k + 1)
            {
                cout << i << " ";
            }
            cout << k + 2 << nl;
        }
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