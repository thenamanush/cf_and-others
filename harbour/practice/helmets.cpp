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
    ll n, k;
    cin >> n >> k;
    vi a(n), b(n);
    vector<pi> p;
    rep(i, n)
    {
        cin >> a[i];
    }
    rep(i, n)
    {
        cin >> b[i];
    }
    rep(i, n)
    {
        p.pb(make_pair(a[i], b[i]));
    }

    // printp(p);

    sort(p.begin(), p.end(), [](pi a, pi b)
         { return a.S < b.S; });

    // if (n == 5)printp(p);
    ll ans = k;
    n--;
    if (n > 0)
    {
        for (auto it : p)
        {
            if (n >= it.F && it.S < k)
            {
                ans += (it.F * it.S);
                n -= it.F;
            }
            else
            {
                if (it.S > k)
                {
                    ans += n * k;
                    break;
                }
                else
                {
                    ans += n * it.S;
                    break;
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