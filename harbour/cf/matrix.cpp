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
    int n, m; cin >> n >> m;
    vector<vi> a(n, vi(m, 0));

    rep(i,n)
    {
        rep(j,m)
        {
            cin >> a[i][j];
        }
    }

    bool f = true;
    while(f)
    {
        f = false;
        int up, down, left, right;

        rep(i,n)
        {
            rep(j,m)
            {
                if (i > 0) up = a[i-1][j];
                else up = 0;

                if (j > 0) left = a[i][j-1];
                else left = 0;

                if (i < n-1) down = a[i+1][j];
                else down = 0;

                if (j < m-1) right = a[i][j+1];
                else right = 0;

                int mx = max({up,down,left,right});

                if (a[i][j] > mx)
                {
                    a[i][j] = mx;
                    f = true;
                }
            }
        }
    }
    
    rep(i,n)
        {
            rep(j,m)
            {
                cout << a[i][j] << " ";
            }
            cout << nl;
        }
        
    return;
}

int main()
{
    alliswell

    int t; cin >> t;
    while (t--) Free_Palestine();

    return 0;
}