#include<bits/stdc++.h>
using namespace std;

#define ll long long
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
#define setbit(x) __builtin_popans(x)
#define sz(x) (int)(x).size()
#define vi vector<int>
#define pi pair<int, int>
#define even(n) if (n % 2 == 0)
#define odd(n) if (n % 2 == 1)
#define sp << " " <<

#define alliswell                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;

    vi a(n);
    rep(i, n) {
        cin >> a[i];
    }

    ll sum = accumulate(a.begin(), a.end(), 0LL);
    ll left = sum - y;
    ll right = sum - x;

    sort(a.begin(), a.end());

    ll ans = 0;

    for (int i = 0; i < n; i++) {
        ll mn = left - a[i];
        ll mx = right - a[i];

        int low = lower_bound(a.begin() + i + 1, a.end(), mn) - a.begin();
        int high = upper_bound(a.begin() + i + 1, a.end(), mx) - a.begin();

        ans += (high - low);
    }

    cout << ans << nl;
}

int main() {
    alliswell

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
