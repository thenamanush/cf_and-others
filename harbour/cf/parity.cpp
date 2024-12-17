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

void rajakar()
{
    int n;
    cin >> n;
    ll even_count = 0, odd_count = 0;
    ll max_odd = 0;
    bool f = false;
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
            max_odd = max(max_odd, (ll)a[i]);
        }
    }

    if (even_count == n || odd_count == n)
    {
        cout << 0 << nl;
        return;
    }
    else
    {
        srt(a);
        rep(i, n)
        {
            if (a[i] % 2 == 0)
            {
                if (a[i] < max_odd)
                {
                    max_odd+=a[i];
                }
                else
                {
                    f = true;
                }
            }
        }
        if (!f)
        {
            cout << even_count << endl;
        }
        else
        cout << even_count+1 << endl;
        }
    }

    int main()
    {
        alliswell

            int t;
        cin >> t;
        while (t--)
            rajakar();

        return 0;
    }
