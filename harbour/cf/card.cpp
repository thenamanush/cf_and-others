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

int rajakar(int a1, int a2, int b1, int b2) {
    int sc[2][2] = {{a1, a2}, {a2, a1}};
    int lc[2][2] = {{b1, b2}, {b2, b1}};
    int ans = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int sn = 0, sl = 0;
            if (sc[i][0] > lc[j][0]) sn++;
            else if (sc[i][0] < lc[j][0]) sl++;
            if (sc[i][1] > lc[j][1]) sn++;
            else if (sc[i][1] < lc[j][1]) sl++;
            
            if (sn > sl) ans++;
        }
    }

    return ans;
}

int main() {
    alliswell

    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        cout << rajakar(a1, a2, b1, b2) << nl;
    }

    return 0;
}