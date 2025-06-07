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
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    vi a;
    rep(i, n){
        ll x; cin >> x;
        a.pb(x);
    }

    ll mx = 0, res = 0;
    rep(i, n){
        if(s[i] == '1'){
            mx = max(a[i] + mx, a[i]);
            res = max(mx, res);
        }
        else{
            mx = 0;
        }
    }
    if(res > k){
        no;
        return;
    }
    else if(res == k){
        yes;
        for(int i = 0; i < n; ++i){
            if(s[i] == '0'){
                cout << INT_MIN << " ";
            }
            else{
                cout << a[i] << " ";
            }
        }
        cout << nl;
    }
    else{
        ll pos = -1;
        rep(i, n){
            if(s[i] == '0'){
                pos = i;
                break;
            }
        }

        if(pos < 0){
            no;
            return;
        }
        yes;
        ll psum = 0, ssum = 0, pref = 0, suff = 0;
        for(int i = pos-1; i >= 0; --i){
            pref += a[i];
            psum = max(psum, pref);
        }
        for(int i = pos+1; i < n; ++i){
            if(s[i] == '0'){
                break;
            }
            suff += a[i];
            ssum = max(ssum, suff);
        }

        a[pos] = k - psum - ssum;
        s[pos] = '1';
        rep(i, n){
            if(s[i] == '0'){
                cout << INT_MIN << " ";
            }
            else{
                cout << a[i] << " ";
            }
        }
        cout << nl;
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