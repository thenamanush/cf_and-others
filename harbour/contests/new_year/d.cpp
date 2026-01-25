#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int spf(int x) {
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) return i;
    }
    return x;
}

int gpf(int x) {
    int ans = -1;
    for (int i = 2; i * i <= x; ++i) {
        while (x % i == 0) {
            ans = i;
            x /= i;
        }
    }
    if (x > 1) ans = x;
    return ans;
}



void solve() {
    int x, k; cin >> x >> k;
    int a = spf(x);
    x *= a;
    if(k == 1) {
        cout << x << endl;
        return;
    }
    int b = gpf(x);
    x /= b;
    if(k == 2) {
        cout << x << endl;
        return;
    }
    k -= 2;
    while(k > 0 and a != b) {
        k--;
        x *= a;
        b = gpf(x);
        x /= b;
    }
    if(k > 0) {
        x *= pow(a, k);
    }
    cout << x << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();

    return 0;
}