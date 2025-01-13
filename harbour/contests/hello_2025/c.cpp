#include<bits/stdc++.h>
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
    ll l, r;
    cin >> l >> r;

    ll ans = 0;
    ll a, b, c;

    for(int i = 30; i >= 0; i--)
    {
        ll bit1 = 0, bit2 = 0;

        if(l & (1ll << i))
        {
            bit1 = 1;
        }
        if(r & (1ll << i))
        {
            bit2 = 1;
        }

        if(bit1 == bit2)
        {
            ans += bit1 * (1ll << i);
        }
        else{
            a = ans + (1ll << i);
            b = a - 1;
            break;
        }
    }
    for (int i = l; i <= r; i++) {
    if (i != a && i != b) {
        c = i;
        break;
    }
}
cout << a sp b sp c << nl;
}
int main()
{
    alliswell

    int t; cin >> t;
    while (t--) solve();

    return 0;
}