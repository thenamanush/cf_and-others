#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int x, y; 
    cin >> x >> y;

    if ((x & y) == 0) {
        cout << x << ' ' << y << endl;
        return;
    }

    // handle zero safely
    if (x == 0 || y == 0) {
        cout << x << ' ' << y << endl;
        return;
    }

    int p = x, q = y;
    long long dif = LLONG_MAX;

    int len = 32 - __builtin_clz(x);
    int tmp_y  = x ^ ((1LL << len) - 1);
    int tmp_y2 = x ^ ((1LL << (len + 1)) - 1);

    if (llabs(y - tmp_y) < dif) {
        p = x; q = tmp_y;
        dif = llabs(y - tmp_y);
    }
    if (llabs(y - tmp_y2) < dif) {
        p = x; q = tmp_y2;
        dif = llabs(y - tmp_y2);
    }

    len = 32 - __builtin_clz(y);
    int tmp_x  = y ^ ((1LL << len) - 1);
    int tmp_x2 = y ^ ((1LL << (len + 1)) - 1);

    if (llabs(x - tmp_x) < dif) {
        p = tmp_x; q = y;
        dif = llabs(x - tmp_x);
    }
    if (llabs(x - tmp_x2) < dif) {
        p = tmp_x2; q = y;
        dif = llabs(x - tmp_x2);
    }

    cout << p << ' ' << q << endl;
}

int32_t main() {
    justice_for_hadi

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
