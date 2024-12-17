#include<bits/stdc++.h>
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
#define sz(x) (int)(x).size()
#define vi vector<int>
#define pi pair<int, int>
#define even(n) if (n % 2 == 0)
#define odd(n) if (n % 2 == 1)

#define alliswell                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void rajakar()
{
    int n;
    cin >> n;
    
    ll a[n];
    rep(i,n)
    {
        cin >> a[i];
    }

    ll b[n+1];
    rep(i,n+1)
    {
        cin >> b[i];
    }

    ll ans = 1, key = 1e9;
    rep(i,n)
    {
        ans+=abs(a[i]-b[i]);

        key = min(key, abs(a[i]-b[n]));
        key = min(key, abs(b[i]-b[n]));

        if (min(a[i],b[i]) <= b[n] && b[n] <= max(a[i],b[i]))
        {
            key = 0;
        }
    }

    cout << ans+key << nl;

    

}

int main()
{
    alliswell

    int t;
    cin >> t;
    while (t--) rajakar();

    return 0;
}