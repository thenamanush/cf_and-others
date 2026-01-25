#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int maxdigit(int x) {
    int mx = -1;
    while(x > 0) {
        mx = max(mx, x % 10);
        x /= 10;
    }
    return mx;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int ans = 0;
    while(n > 0) {
        n -= maxdigit(n);
        ans++;
    }
    cout << ans << endl;
}