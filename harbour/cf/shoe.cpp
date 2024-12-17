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
#define rrep(i, n) for (int i = (n)-1; i >= 0; i--)
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

void Free_Palestine()
{
    int n;
    cin >> n;
    vi a(n);
    map<int, vi> positions;
    rep(i, n)
    {
        cin >> a[i];
        positions[a[i]].pb(i + 1);
    }
    for (auto it : positions)
    {
        if (it.second.size() < 2)
        {
            cout << -1 << nl;
            return;
        }
    }

    vi result(n);
    for (auto it : positions)
    {
        int count = 0;
        for (int pos : it.second)
        {
            result[it.second[(count + 1) % it.second.size()] - 1] = pos;
            count++;
        }
    }

    print(result);
}

int main()
{
    alliswell

    int t;
    cin >> t;
    while (t--)
        Free_Palestine();

    return 0;
}
