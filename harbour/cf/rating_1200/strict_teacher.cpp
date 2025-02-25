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
    ll n, m, k;
    cin >> n >> m >> k;

    vi a(m);
    vi b(k);
    rep(i, m) cin >> a[i];
    rep(i, k) cin >> b[i];

    srt(a);
    rep(i, k)
    {
        if(b[i] < a[0])
        {
            cout << a[0] - 1 << nl;
        }
        else if(b[i] > a[m - 1])
        {
            cout << n - a[m - 1] << nl;
        }
        else{
            ll l = 0, h = m - 1, ind = -1;
            while(l <= h)
            {
                ll mid = l + (h - l) / 2;
                if(a[mid] < b[i])
                {
                    ind = mid;
                    l = mid + 1;
                }
                else{
                    h = mid - 1;
                }
            }
            cout << (a[ind + 1] - a[ind]) / 2 << nl;
        }
    }
}
int main()
{
    alliswell

    int t; cin >> t;
    while (t--) solve();

    return 0;
}