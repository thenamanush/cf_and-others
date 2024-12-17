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
#define sz(x) (int)(x).size()
#define vi vector<int>
#define pi pair<int, int>
#define even(n) if (n % 2 == 0)
#define odd(n) if (n % 2 == 1)

#define alliswell                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void joybangla()
{
    int n;
    cin >> n;
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;

    while (m--)
    {
        string s;
        cin >> s;

        if (size(s) != n)
        {
            no;
            continue;
        }

        bool ok = true;

        unordered_map<int, char> x;
        unordered_map<char, int> y;

        for (int i = 0; i < n; ++i)
        {
            if (x.count(a[i]) == 0 && y.count(s[i]) == 0)
            {
                x[a[i]] = s[i];
                y[s[i]] = a[i];
            }
            else if (x[a[i]] != s[i] || y[s[i]] != a[i])
            {
                ok = false;
                break;
            }
        }
        if (ok) yes;
        else no;
    }
}

int main()
{
    alliswell

        int t;
    cin >> t;
    while (t--)
        joybangla();

    return 0;
}