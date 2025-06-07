#include<bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
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

ll powmod(ll base, ll exp) {
    ll res = 1;
    while (exp) {
        if (exp % 2) res = res * base % MOD;
        base = base * base % MOD;
        exp /= 2;
    }
    return res;
}


void solve()
{
    ll n; cin >> n;
    vi a(n), b(n);
    rep(i, n){
        cin >> a[i];
    }
    rep(i, n){
        cin >> b[i];
    }

    vi mxa(n), mxb(n), ans;
    mxa[0] = a[0], mxb[0] = b[0];
    for(int i = 1; i < n; ++i){
        mxa[i] = max(a[i], mxa[i-1]);
        mxb[i] = max(a[i], mxb[i-1]);
    }
    cout << powmod(2, mxa[0]) + powmod(2, mxb[0]) % MOD << " ";
    for(int i = 1; i < n; ++i){
        cout << powmod(2, mxa[i]) + powmod(2, mxb[i-1]) % MOD << " ";
    }
    cout << nl;
}

int main()
{
    alliswell

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}