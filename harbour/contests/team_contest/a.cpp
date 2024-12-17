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
    int n; cin >> n;
    vi a(n);
    map<int, int> mp;

    rep(i, n) 
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int key = 0;
    vector<int> ans;
    for(auto it : mp)
    {
        key += it.second / 2;
        if(it.second >= 2)
        {
            ans.pb(it.first);
        }
    }
    if(key < 4)
    {
        no;
        return;
    }
    else{
        yes;
        int sz = ans.size();
        srt(ans);
        if(sz >= 3)
        {
            print(ans);
            cout << ans[0] sp ans[1] sp ans[0] sp ans[2] sp ans[3] sp ans[1] sp ans[3] sp ans[2] << endl;
        }
        else if(sz == 1)
        {
            cout << ans[0] sp ans[0] sp ans[0] sp ans[0] sp ans[0] sp ans[0] sp ans[0] sp ans[0] << endl;
        }
        else if(sz == 2)
        {
            for(auto it: mp)
            {
                if(it.first == ans[0])
                {
                    if(it.second == 4)
                    {
                        cout << ans[0] sp ans[1] sp ans[0] sp ans[1] sp ans[0] sp ans[1] sp ans[0] sp ans[1] << endl;
                        return;
                    }
                    else{
                        cout << ans[0] sp ans[0] sp ans[0] sp ans[1] sp ans[0] sp ans[0] sp ans[0] sp ans[1] << endl;
                        return;
                    }
                }

            }
        }
    }
}

int main()
{
    alliswell

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
