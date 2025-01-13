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
    ll n;
    cin >> n;

    vi a(2 * n);
    rep(i, 2 * n)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    for (int i = 0; i < 2 * n - 1; i += 2)
    {
        if (a[i] == a[i + 1])
        {
            mp[a[i]]++;
        }
    }
    string ans;
    for (int i = 0; i < 2 * n - 1; i += 2)
    {
        if (a[i + 1] - a[i] > 1)
        {
            int it = a[i];
            bool f = false;

            while (it <= a[i + 1])
            {
                if (mp.find(it) == mp.end())
                {
                    ans += '1';
                    f = true;
                    break;
                }
                else
                {
                    it++;
                }
            }
            if (!f)
            {
                ans += '0';
            }
        }
        if (a[i + 1] - a[i] == 1)
        {
            int cnt = 0;
            if (mp.find(a[i + 1]) != mp.end())
            {
                cnt++;
            }
            if (mp.find(a[i]) != mp.end())
            {
                cnt++;
            }
            if (cnt < 2)
            {
                ans += '1';
            }
            else
            {
                ans += '0';
            }
        }
        if (a[i + 1] == a[i])
        {
            if (mp[a[i]] > 1)
            {
                ans += '0';
            }
            else
            {
                ans += '1';
            }
        }
    }
    cout << ans << nl;
}

int main()
{
    alliswell

        int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}