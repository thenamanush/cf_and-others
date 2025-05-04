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

void solve(int x)
{
    ll n, k;
    cin >> n >> k;
    vi a(n), b(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    rep(i, n)
    {
        cin >> b[i];
    }
    // if(x == 421){
    //     cout << k << nl;
    // }
    ll fl = 0;
    rep(i, n)
    {
        if (a[i] >= 0 && b[i] >= 0)
        {
            fl = a[i] + b[i];
            break;
        }
    }
    rep(i, n)
    {
        if (a[i] >= 0 && b[i] >= 0)
        {
            if (a[i] + b[i] != fl)
            {
                cout << 0 << nl;
                return;
            }
        }
        if (a[i] <= fl && (fl - a[i]) <= k)
        {
            continue;
        }
        else if (fl > 0)
        {
            cout << 0 << nl;
            return;
        }
    }
    srt(b);
    if (b[0] < 0 && b[n - 1] < 0)
    {
        ll mx = 0, mn = INT_MAX;
        rep(i, n)
        {
            mx = max(a[i], mx);
            mn = min(a[i], mn);
        }
        cout << k - (mx - mn - 1) << nl;
        return;
    }
    srt(a);
    if(a[0] == a[n-1] && b[0] == b[n-1]){
        cout << 0 << nl;
    }
    else{
        cout << 1 << nl;
    }
}

int main()
{
    alliswell

        int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++)
        solve(i);

    return 0;
}