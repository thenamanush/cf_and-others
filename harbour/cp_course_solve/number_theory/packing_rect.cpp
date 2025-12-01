#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);


    ll w, h, n;
    cin >> w >> h >> n;

    ll l = 1, r = (ll)1e14, ans = r;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        ll a = mid / w;
        ll b = mid / h;

        __int128 prod = (__int128)a * (__int128)b;

        if (prod >= n) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << '\n';
    return 0;
}