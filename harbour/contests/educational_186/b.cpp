#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    ll a, b;
    cin >> a >> b;

    int ans = 0;

    ll f = min(a, b);
    ll s = max(a, b);
    int i = 0;
    while (true) {
        ll cur = (1LL << i);
        if (i % 2 == 0) {
            if (f >= cur)
                f -= cur;
            else
                break;
        }
        else {
            if (s >= cur)
                s -= cur;
            else
                break;
        }
        ans++;
        i++;
    }

    f = min(a, b);
    s = max(a, b);
    swap(f, s);
    int i2 = 0;
    int ans2 = 0;
    while (true) {
        ll cur = (1LL << i2);
        if (i2 % 2 == 0) {
            if (f >= cur)
                f -= cur;
            else
                break;
        }
        else {
            if (s >= cur)
                s -= cur;
            else
                break;
        }
        ans2++;
        i2++;
    }

    ans = max(ans, ans2);

    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
