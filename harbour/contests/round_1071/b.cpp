#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int tmp = 0, ans = INT_MAX;
    for(int i = 1; i < n; ++i) {
        tmp += abs(a[i] - a[i-1]);
    }
    for(int i = 0; i < n; ++i) {
        if(i == 0) {
            int rem = abs(a[i] - a[i+1]);
            ans = min(ans, tmp - rem);

        }
        else if(i == n - 1) {
            int rem = abs(a[i] - a[i-1]);
            ans = min(ans, tmp - rem);
        }
        else{
            int rem = abs(a[i] - a[i-1]) + abs(a[i] - a[i+1]);
            int add = abs(a[i+1] - a[i-1]);
            ans = min(ans, tmp - rem + add);
        }
    }
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}