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
    /* from the river to the sea
     Palestine will be free */
    int n;
    string s;
    cin >> n >> s;

    string temp = s;
    srt(temp);

    if (temp[0] == temp[n - 1])
    {
        yes;
        return;
    }

    bool f = false;
    int ind = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'p')
        {
            f = true;
            ind = i;
            break;
        }
    }
    for (int i = ind; i < n; i++)
    {
        if (f && s[i] == 's')
        {
            no;
            return;
        }
    }
    int a = 0, b = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'p' && (s[i + 1] == '.' || s[i + 1] == 'p'))
        {
            a = 1;
            break;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] == 's' && (s[i - 1] == '.' || s[i - 1] == 's'))
        {
            b = 1;
            break;
        }
    }
    if(a == 1 and b == 1)
    {
        no;
        return;
    }
    else{
        yes;
    }
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