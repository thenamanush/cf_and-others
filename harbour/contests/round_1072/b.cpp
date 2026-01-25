#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int s, k, m;
    cin >> s >> k >> m;

    int d = m / k, ans = 0;
    if(d & 1) {
        ans = min(s, k);
        int rem = m % k;
        ans -= rem;
        cout << max(0ll, ans) << endl;
    }
    else{
        ans = s;
        int rem = m % k;
        ans -= rem;
        cout << max(0ll, ans) << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}