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
const int N = 1e6+5;
vector<ll>pfs(N);

bool isPerfectSquare(ll x) {
    ll s = sqrt(x);
    return s * s == x;
}
void solve(){
    /* from the river to the sea
    Palestine will be free */
    ll n;
    cin >> n;
    vector<ll> ans;
    
    for (int i = 1; i <= n; ++i) {
        if (isPerfectSquare(pfs[i])) {
            if (i + 1 > n) {
                cout << -1 << nl;
                return; 
            }
            ans.push_back(i + 1);
            ans.push_back(i);
            i++;
        } else {
            ans.push_back(i);
        }
    }
    print(ans);
}
int main()
{
    alliswell
    pfs[1] = 1;
    for(int i = 2; i < N; ++i){
        pfs[i] = pfs[i-1] + i;
    }
    int t; cin >> t;
    while(t--) solve();

    return 0;
}