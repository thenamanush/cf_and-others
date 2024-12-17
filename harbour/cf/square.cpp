#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
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
#define sz(x) (int)(x).size())
#define vi vector<int>
#define pi pair<int, int>
#define even(n) if (n % 2 == 0)
#define odd(n) if (n % 2 == 1)

#define alliswell                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void rajakar()
{
    int n, c, d;
    cin >> n >> c >> d;
    vi a(n * n);
    rep(i, n * n) cin >> a[i];
    srt(a);

    int b[n][n];
    
    b[0][0] = a[0];
    
    for (int j = 1; j < n; j++) {
        b[0][j] = b[0][j - 1] + d;
    }
    
    
    for (int i = 1; i < n; i++) {
        b[i][0] = b[i - 1][0] + c;
    }
    
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            b[i][j] = b[i][j - 1] + d; 
        }
    }

    vi e;
    rep(i, n) {
        rep(j, n) {
            e.pb(b[i][j]);
        }
    }
    srt(e);
    if (a==e) yes;
    else no;
}

int main()
{
    alliswell

    int t;
    cin >> t;

    while (t--) rajakar();

    return 0;
}
