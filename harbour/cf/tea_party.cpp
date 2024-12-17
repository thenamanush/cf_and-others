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
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> a;
    vector<pair<int, int>> b;

    vi ar(n);
    rep(i, n)
    {
        cin >> ar[i];
        a.push_back({ar[i], i});
    }

    rsrt(a);

    for(auto & it : a)
    {
        if ((k - (it.F + 1) / 2) >= 0)
        {
            k -= (it.F + 1) / 2;
            b.push_back({(it.F + 1) / 2, it.S});
        }
        else
        {
            cout << -1 << nl;
            return;
        }
    }
    
    if(k > 0){
        for(int i = 0; i < n; i++)
        {
            int rem = (a[i].first - b[i].first);
            b[i].first += min(k, rem);
            k -= min(k, rem);
        }
    }
    sort(b.begin(), b.end(),[](const pair<int, int> & x, const pair<int, int> & y)
    {
        return x.S < y.S;
    });

    for(auto & it : b)
    {
        cout << it.first << " ";
    }
    cout << nl;
    
}

int main()
{
    alliswell

    solve();

    return 0;
}