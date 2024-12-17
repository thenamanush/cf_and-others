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
#define trav(a, b) for (auto &a : b)
#define F first
#define S second
#define sz(b) (int)(b).size()
#define vi vector<int>
#define pi pair<int, int>
#define even(n) if (n % 2 == 0)
#define odd(n) if (n % 2 == 1)

#define alliswell                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    int n, m, q;
    cin >> n >> m >> q;

    vi a(m);
    rep(i, m)
    {
        cin >> a[i];
    }
    srt(a);

    vi b(q);
    rep(i, q)
    {
        cin >> b[i];
    int ans = 0;

    // Case when b[i] is between a[0] and a[m-1]
    if (b[i] > a[0] && b[i] < a[m - 1])
    {
        // Use lower_bound to find the first element >= b[i]
        auto it = lower_bound(a.begin(), a.end(), b[i]);

        int z = *it; // This is the first element greater than or equal to b[i]
        int y = *(it - 1); // This is the element just before it, hence smaller than b[i]

        // Calculate mid-point and result
        int mid = (z + y) / 2;
        ans = min(abs(mid - y), abs(mid - z));
    }
    // Case when b[i] is less than the first element in a
    else if (b[i] < a[0])
    {
        ans = a[0] - 1;
    }
    // Case when b[i] is greater than the last element in a
    else if (b[i] > a[m - 1])
    {
        ans = abs(a[m - 1] - n);
        }
        else if (b[i] < a[0])
        {
            ans = a[0] - 1;
        }
        else if (b[i] > a[m - 1])
        {
            ans = abs(a[m - 1] - n);
        }

        cout << ans << nl;
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
