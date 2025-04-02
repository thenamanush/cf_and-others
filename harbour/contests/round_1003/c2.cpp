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


int func(const vector<ll> & v, int x){
    auto it = lower_bound(v.begin(), v.end(), x);
    return it == v.end() ? -1 : *it;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    vi a(n);
    vi b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    
    srt(b);
    ll prev = -INT_MAX;
    rep(i, n){
        ll val = func(b, prev+a[i]);
        if(val != -1){
            if(a[i] < prev){
                a[i] = val - a[i];
            }
            else{
                a[i] = min(a[i], val - a[i]);
            }
        }
        if(a[i] < prev){
            no;
            return;
        }
        prev = a[i];
    }
    yes;
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