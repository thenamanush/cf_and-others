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
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define rep(i, n) for (int i = 0; i < (n); i++)
#define trav(a, x) for (auto &a : x)
#define F first
#define S second
#define sz(x) (int)(x).size())
#define vi vector<int>

#define alliswell                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void rajakar() {
    int x,y,k;
    cin >> x >> y >> k;
    
    for (int i = 1; i < k; i+=2)
    {
        cout << x+i << " " << y+i << endl;
        cout << x-i << " " << y-i << endl;
    }
    if (k  % 2 == 1)
    {
        cout << x << " " << y << endl;
    }
}

int main() {
    alliswell

    int t;
    cin >> t;
    while (t--) rajakar();

    return 0;
}
