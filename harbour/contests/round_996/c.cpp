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
#define setbit(x) __builtin_popcount(x)
#define sz(x) (int)(x).size()
#define vi vector<int>
#define pi pair<int, int>
#define even(n) if (n % 2 == 0)
#define odd(n) if (n % 2 == 1)
#define sp << " " <<

#define alliswell                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    ll n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    vector<vector<ll>> a(n, vector<ll>(m));
    rep(i, n)
    {
        rep(j, m)
        {
            cin >> a[i][j];
        }
    }
    vector<ll> R(n), C(m);
    rep(i, n)
    {
        ll sum = 0;
        rep(j, m)
        {
            sum += a[i][j];
        }
        R[i] = sum;
    }
    rep(j, m)
    {
        ll sum = 0;
        rep(i, n)
        {
            sum += a[i][j];
        }
        C[j] = sum;
    }
    ll x = 0, y = 0;
    ll it = 0;
    
    while(it < n + m - 1)
    {
        if(s[it] == 'D')
        {
            a[x][y] = - R[x];
            R[x] += a[x][y];
            C[y] += a[x][y];
            x++;
        }
        else
        {
            a[x][y] = - C[y];
            R[x] += a[x][y];
            C[y] += a[x][y];
            y++;
        }
        it++;
    }
    rep(i, n)
    {
        rep(j, m)
        {
            cout << a[i][j] << " ";
        }
        cout << nl;
    }

}
int main()
{
    alliswell

        int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}