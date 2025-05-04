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

    void solve() {
        ll n, m, q;
        cin >> n >> m >> q;
    
        vector<vector<ll>> v(n + 1, vector<ll>(m + 1, 0));
        vector<bool> rowMarked(n + 1, false);
    
        while (q--) {
            ll type;
            cin >> type;
    
            if (type == 1) {
                ll a, b;
                cin >> a >> b;
                if (a >= 1 && a <= n && b >= 1 && b <= m) {
                    v[a][b] = 1;
                }
            }
            else if (type == 2) {
                ll row;
                cin >> row;
                if (row >= 1 && row <= n) {
                    rowMarked[row] = true;
                }
            }
            else if (type == 3) {
                ll a, b;
                cin >> a >> b;
                if (a >= 1 && a <= n && b >= 1 && b <= m) {
                    if (rowMarked[a] || v[a][b] == 1)
                        cout << "Yes" << nl;
                    else
                        cout << "No" << nl;
                } else {
                    cout << "No" << nl;
                }
            }
        }
    }
    

int main()
{
    alliswell

    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}