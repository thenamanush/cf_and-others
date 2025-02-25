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
#define lcm(a, b) (a * b) / (std::gcd<ll>(a, b))
#define print(v)          \
    for (auto e : v)      \
        cout << e << " "; \
    cout << endl;
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define rep(i, n) for (int i = 0; i < (n); i++)
#define trav(a, x) for (auto &a : x)

#define alliswell                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;

    // Input and frequency count
    rep(i, n)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    ll cnt = 0;
    vector<ll> ys;

    // Identify numbers with frequency >= 2
    trav(it, mp)
    {
        if (it.second >= 2)
        {
            cnt++;
            ys.pb(it.first);
        }
        if (cnt == 2)
            break;
    }

    // Case when two numbers have frequency >= 2
    if (cnt == 2)
    {
        cout << ys[0] << " " << ys[0] << " " << ys[1] << " " << ys[1] << nl;
        return;
    }

    // Case when one number has frequency >= 2
    if (cnt == 1)
    {
        ll key = ys[0];
        srt(a); // Sort the array for efficient searching

        int left = 0, right = 1;
        int cnt_skip = 0; // To track how many times we've skipped the 'key'
        while (right < n)
        {
            ll x = a[left], y = a[right];

            // Skip the 'key' number up to two times
            if (x == key || y == key)
            {
                if (cnt_skip < 2) {
                    cnt_skip++;
                    right++;  // Move the right pointer to skip the key
                    continue;
                }
            }

            // Check the condition
            if (abs(x - y) < 2 * key)
            {
                cout << x << " " << y << " " << key << " " << key << nl;
                return;
            }

            // Move pointers
            if (right == left + 1)
                right++;
            else
                left++;
        }
    }

    // If no valid output is found
    cout << -1 << nl;
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