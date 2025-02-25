#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;
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

void solve()
{
    ll n; cin >> n;
    vector<int> l(n + 1), r(n + 1);
    vector<int> v(2 * n + 1, 0);
    for(int i = 1; i <= n; ++i) {
        cin >> l[i] >> r[i];
        if(l[i] == r[i]) {
            v[l[i]]++;
        }
    }

    vector<int> pfs(2 * n + 1, 0);
    vector<int> fs(2 * n + 1, 0);

    for(int i = 1; i <= 2 * n; ++i) {
        pfs[i] = pfs[i - 1] + v[i];
        fs[i] = fs[i - 1] + min(1, v[i]);
    }

    string ans;
    for(int i = 1; i <= n; ++i) {
        if(l[i] == r[i]) {
            if(pfs[l[i]] - (l[i] > 1 ? pfs[l[i] - 1] : 0) == 1) {
                ans.push_back('1');
            } else {
                ans.push_back('0');
            }
        } else {
            if(fs[r[i]] - (l[i] > 1 ? fs[l[i] - 1] : 0) < (r[i] - l[i] + 1)) {
                ans.push_back('1');
            } else {
                ans.push_back('0');
            }
        }
    }
    cout << ans << nl;
}

int main()
{
    alliswell

    int t; cin >> t;
    while(t--) solve();

    return 0;
}