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
    int a, b; cin >> a >> b;

    // if (a == b || a == 0 || b == 0)
    // {
    //     cout << 1 << nl;
    //     cout << a << nl;
    //     return;
    // }

    // if(a > 0 && b > 0)
    // {
    //     cout << 3 << nl;
    //     int sum = 3 * a;
    //     cout << 1 sp b sp sum-(b+1) << nl;
    //     return;
    // }
    // if(a < 0 && b > 0)
    // {
    //     cout << 3 << nl;
    //     int sum = 3 * a;
    //     int drum = -(b * 2 + 1);
    //     cout << sum + drum sp b sp b + 1 << nl;
    //     return;
    // }
    // if(a < 0 && b < 0)
    // {
    //    // cout << 3 << nl;
    //     int sum = 3 * a;
    //     if(sum == b)
    //     {
    //         cout << 3 << nl;
    //         cout << -1+b sp b  sp abs(-1 + b)<< nl;
    //         return;
    //     }
    //     else if(sum < b)
    //     {
    //         yes;
    //     }
    //     else{
    //         cout << 3 << nl;
    //         cout << sum sp b sp abs(b) << nl;
    //     }
    // }
    cout << 3 << nl;
    cout<<b<<" "<<b<<" "<<(3*a)-(2*b);
}

int main()
{
    alliswell

    solve();

    return 0;
}