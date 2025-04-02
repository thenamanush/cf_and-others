#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pie 2 * (acos(0.0))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define nl '\n'
#define lcm(a, b) (a * b) / (std::gcd<ll>(a, b))
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
#define vi vector<long long>
#define pi pair<int, int>
#define even(n) if (n % 2 == 0)
#define odd(n) if (n % 2 == 1)
#define sp << " " <<

#define alliswell                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    map<int, int> mp;
    rep(i, n)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    if (mp[0] < 3 || mp[1] < 1 || mp[2] < 2 || mp[3] < 1 || mp[5] < 1)
    {
        cout << 0 << nl;
        return;
    }
    int cnt0 = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt5 = 0, cnt = 0;
    rep(i, n)
    {
        if (a[i] == 0 && cnt0 < 3)
            cnt0++, cnt++;
        if (a[i] == 1 && cnt1 < 1)
            cnt1++, cnt++;
        if (a[i] == 2 && cnt2 < 2)
            cnt2++, cnt++;
        if (a[i] == 3 && cnt3 < 1)
            cnt3++, cnt++;
        if(a[i] == 5 && cnt5 < 1){
            cnt5++;
            cnt++;
        }
        if (cnt == 8)
        {
            cout << i + 1 << nl;
            return;
        }
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