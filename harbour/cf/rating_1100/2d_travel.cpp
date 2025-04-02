#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;
#define inf LLONG_MAX
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


void solve(){
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    --a, --b;
    vector<pair<ll, ll>> c(n);

    for(auto & it : c){
        cin >> it.first >> it.second;
    }

    //both major city
    if(a < k && b < k){
        cout << 0 << nl;
        return;
    }

    // direct difference
    ll dir = abs(c[a].first - c[b].first)+ abs(c[a].second - c[b].second);

    // via major city
    ll x = inf, y = inf;
    for(int i = 0; i < k; ++i){
        ll dst_a = abs(c[a].first - c[i].first) + abs(c[a].second - c[i].second);
        ll dst_b = abs(c[b].first - c[i].first) + abs(c[b].second - c[i].second);
        x = min(x, dst_a);
        y = min(y, dst_b);
    }
    ll maj = (k > 0) ? (x + y) : inf;

    
    cout << min(dir, maj) << nl;

}
int main()
{
    alliswell

    int t = 1; cin >> t;
    while(t--) solve();

    return 0;
}