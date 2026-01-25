#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; 
    cin >> n;

    ll ans_a = 1e13, ans_b = 1e13;
    for (ll i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            ll a = i, b = n / i;
            if(std::gcd(a, b) == 1) {
                if(max(a, b) < max(ans_a, ans_b)) {
                    ans_a = a, ans_b = b;
                }
            }
        }
    }
    cout << ans_a << ' ' << ans_b << endl;
    return 0;
}
