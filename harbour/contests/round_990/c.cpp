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
    int n, w;
    cin >> n >> w;
    
    int sum = 0;
    vi a(n), avg(n);
    rep(i, n)
    {
        cin >> a[i];
        avg[i] = (a[i] + 1) / 2;
        sum += avg[i];
    }
    
    if (sum > w)
    {
        cout << "-1" << endl;
        return;
    }

    int rem = w - sum;

    vector<pair<int, int>> ans(n);
    rep(i, n)
    {
        ans[i] = {a[i], i};
    }

    sort(ans.begin(), ans.end(), greater<pair<int, int>>());

    vi prnt(n);
    rep(i, n)
    {
        int idx = ans[i].second;
        int maxPossible = a[idx];
        int currentTea = avg[idx];

        int extraTea = min(rem, maxPossible - currentTea);
        prnt[idx] = currentTea + extraTea;
        rem -= extraTea;

        if (rem == 0)
            break;
    }

    if (rem > 0)
    {
        cout << "-1" << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        cout << prnt[i] << " ";
    }
    cout << endl;
}

int main()
{
    alliswell

    solve();

    return 0;
}
