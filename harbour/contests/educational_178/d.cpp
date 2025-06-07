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

const int N = 6e6;
vector<bool> isprime(N + 1, true);
vi prime;

void sieve() {
    isprime[0] = isprime[1] = false;
    for (ll i = 2; i <= N; ++i) {
        if (isprime[i]) {
            prime.pb(i);
            for (ll j = i * i; j <= N; j += i)
                isprime[j] = false;
        }
    }
}

void solve() {
    ll n;
    cin >> n;
    vi a(n), ps(n);

    rep(i, n) cin >> a[i];
    ll total = accumulate(a.begin(), a.end(), 0ll);

    rep(i, n) ps[i] = prime[i];
    ll supp = accumulate(ps.begin(), ps.end(), 0ll);

    srt(a);
    rsrt(ps);

    if (total >= supp) {
        cout << 0 << nl;
        return;
    }

    for (int i = 0; i < n; ++i) {
        supp -= ps[i];
        total -= a[i];
        if (total >= supp) {
            cout << i + 1 << nl;
            return;
        }
    }
    cout << n << nl;
}

int main() {
    alliswell
    sieve();

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}