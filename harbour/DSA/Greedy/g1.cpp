//assing cookies
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

const int N = 1e5+7;

#define alliswell                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve(vector<int> &a, vector<int> &b)
{
    int x = a.size();
    int y = b.size();

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int l = 0, r = 0;

    while(l < x)
    {
        if(a[l] >= b[r])
        {
            r++;
        }
        l++;
    }
    cout << r << nl;
}

int main()
{
    alliswell

    int n, m;
    cin >> n >> m;
    vector<int>greed(n);
    vector<int>cookies(m);

    for(int i = 0; i < n; i++)
    {
        cin >> greed[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> cookies[i];
    }

    solve(cookies, greed);

    return 0;
}