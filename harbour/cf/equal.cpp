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
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    int cnt1 = 1;
    int cnt2 = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[0])
        {
            cnt1++;
        }
        else 
        {
            break;
        }
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] == a[n - 1])
        {
            cnt2++;
        }
        else
        {
            break;
        }
    }

    if (a[0] == a[n - 1])
    {
        if (cnt1 == n)
        {
            cout << 0 << endl;  
            return;
        }
        else 
        {
            cout << n - (cnt1 + cnt2) << endl;
            return;
        }
    }
    else
    {
        cout << n - max(cnt1, cnt2) << endl;
    }

    return;
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
