#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define pie 2 * (acos(0.0))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define nl '\n'
#define lchr(a, b) (a * b) / (__gcd<ll>(a, b))
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
        string s;
        cin >> s;

        map<char, ll> m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }

        ll mn = 0, mx = 1e4;
        char ch, chr;
        for (auto &it : m)
        {
            if (it.S > mn)
                mn = it.S, ch = it.F;
            if (it.S < mx)
                mx = it.S, chr = it.F;
        }

        if (mn == mx)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] != ch)
                {
                    s[i] = ch;
                    break;
                }
            }
            cout << s << endl;
            return;
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == chr)
            {
                s[i] = ch;
                break;
            }
        }
        cout << s << endl;
}

int main()
{
    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
