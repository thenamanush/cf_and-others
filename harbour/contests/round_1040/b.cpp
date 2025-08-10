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
#define lcm(a, b) (a * b) / (gcd<ll>(a, b))
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
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    vector<ll> f(3, 0);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        f[a[i]]++;

    }
    ll sum = accumulate(a.begin(), a.end(), 0ll);
    if(k < sum){
        for(auto & it : a){
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    else if(k - sum == 1){
        for(int i = 0; i < f[1]; ++i){
            cout << 1 << " ";
        }
        for(int i = 0; i < f[2]; ++i){
            cout << 2 << " ";
        }
        for(int i = 0; i < f[0]; ++i){
            cout << 0 << " ";
        }
        cout << endl;
        return;
    }
    else{
        cout << -1 << endl;
    }
}

int main()
{
    alliswell

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}