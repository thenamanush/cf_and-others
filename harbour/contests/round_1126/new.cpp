#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

/*
    min ans e binary search marbo
*/

// FIX 1: old ok() assumed each frequency 1..x is used only once (sum 1..x + x),
// but frequency f can be used floor(x/f) times while f*c_f <= x.
// So with cost x the max number of oranges is sum over f of f*floor(x/f).
bool ok(int x, int n) {
    int s = 0;
    for (int f = 1; f <= x; f++) s += f * (x / f);
    return s >= n;
}

void solve() {
    int n; cin >> n;

    int l = 1, r = n;
    int ans = r;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (ok(mid, n)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << endl;

    // FIX 2: old construction printed each leftover as a new single value, and
    // used a fixed pattern (ans, ans-1, ..., 1). Now greedily from f = ans down to 1
    // take c = min(ans/f, rem/f) new values, each repeated f times.
    int rem = n, val = 0;
    for (int f = ans; f >= 1 && rem > 0; f--) {
        int c = min(ans / f, rem / f);
        rem -= c * f;
        while (c--) {
            val++;
            for (int k = 0; k < f; k++) cout << val << " ";
        }
    }
    cout << endl;
}


int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}
