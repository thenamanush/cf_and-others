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
    string s, t;
    cin >> s >> t;

    vector<int> pos;
    rep(i, s.size())
    {
        if (s[i] == '?')
        {
            pos.pb(i);
        }
    }
    for (char c1 = 'a'; c1 <= 'z'; ++c1)
    {
        for (char c2 = 'a'; c2 <= 'z'; ++c2)
        {
            for (char c3 = 'a'; c3 <= 'z'; ++c3)
            {
                for (char c4 = 'a'; c4 <= 'z'; ++c4)
                {
                    string tmp = s;
                    tmp[pos[0]] = c1;
                    tmp[pos[1]] = c2;
                    tmp[pos[2]] = c3;
                    tmp[pos[3]] = c4;

                    if(tmp.find(t) != string::npos){
                        cout << "Yes" << endl;
                        return;
                    }
                }
            }
        }
    }
    cout << "No" << endl;
}

int main()
{
    alliswell

        int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}

/*

 -- sliding window approach

void solve()
{
    string T, U;
    cin >> T >> U;

    int n = T.size(), m = U.size();

    for (int i = 0; i <= n - m; ++i) {
        bool ok = true;
        for (int j = 0; j < m; ++j) {
            if (T[i + j] != '?' && T[i + j] != U[j]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            yes;
            return;
        }
    }
    no;
}
*/