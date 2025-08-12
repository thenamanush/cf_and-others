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
    ll n, m; cin >> n >> m;
    vector<string> s(n);
    for(int i = 0; i < n; ++i){
        cin >> s[i];
    }

    if(n == 1){
        sort(s[0].begin(), s[0].end());
        if(s[0][0] != s[0][m-1]){
            no;
            return;
        }
        else{
            yes;
            return;
        }
    }

    // corner corner
    if((s[0][0] == s[n-1][m-1]) || s[n-1][0] == s[0][m-1]){
        yes;
        return;
    }

    // uporer corner same
    if(s[0][0] == s[0][m-1]){
        for(int i = 0; i < m; ++i){
            if(s[n-1][i] == s[0][0]){
                yes;
                return;
            }
        }
    }
    // nicher corner same
    if(s[n-1][0] == s[n-1][m-1]){
        for(int i = 0; i < m; ++i){
            if(s[0][i] == s[n-1][0]){
                yes;
                return;
            }
        }
    }
    // left corners same
    if(s[0][0] == s[n-1][0]){
        for(int i = 0; i < n; ++i){
            if(s[i][m-1] == s[0][0]){
                yes;
                return;
            }
        }
    }
    // right corners same 
    if(s[0][m-1] == s[n-1][m-1]){
        for(int i = 0; i < n; ++i){
            if(s[i][0] == s[0][m-1]){
                yes;
                return;
            }
        }
    }
    no;
}



int main()
{
    alliswell

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}