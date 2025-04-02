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

void ramadan_kareem(){
    /* from the river to the sea
     Palestine will be free */
    ll n, k; cin >> n >> k;
    if(k % 2 == 0){
        for(int i = 1; i <= n; ++i){
            if(i == n - 1){
                cout << n << " ";
            }
            else{
                cout << n-1 << " ";
            }
        }
        cout << nl;
        return;
    }
    if(k % 2){
        for(int i = 1; i <= n; ++i){
            if(i == n){
                cout << n-1 << " ";
            }
            else{
                cout << n << " ";
            }
        }
        cout << nl;
        return;
    }
}
int main()
{
    alliswell

    int t = 1; cin >> t;
    while(t--) ramadan_kareem();

    return 0;
}