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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    ll l = 0, r = 0;
    string ans = string(n, '+');
    
    rep(i, k){
        // remove top when c is 0
        if(s[i] == '0'){
            if(l > 0){
                if(ans[l - 1] == '?'){
                    ans[l - 1] = '-';
                    ans[l] = '?';
                    l++;
                }
                else{
                    ans[l] = '-';
                    l++;
                }
            }
            else{
                ans[l] = '-';
                l++;
            }
        }
        // remove bottom when c is 1
        else if(s[i] == '1'){
            if(n - 1 + r < n){
                if(ans[n - 1 + r] == '?'){
                    ans[n - 1 + r] = '-';
                    ans[n - r] = '?';
                    r++;
                }
                else{
                    ans[n - 1 + r] = '-';
                    r++;
                }
            }
            else{
                ans[n - 1 + r] = '-';
                r++;
            }
        }
        // two where both are uncertain
        else{
            ans[l] = '?';
            ans[n - 1 + r] = '?';
            l++;
            r++; 
        }
    }
    cout << ans << nl;
}

int main()
{
    alliswell

        int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}