#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; ++i) cin >> a[i];

    if(!is_sorted(a.begin() + 1, a.end()) &&
        !is_sorted(a.rbegin(), a.rend() - 1)) {
        cout << "NO" << endl;
        return;
    }
    int mn = min(a[0], a[n - 1]);
    if(mn == a[0]) {
        for(int i = 1; i <= n; ++i) {
            if((a[i] / mn == 0)) {
                if(a[i] / mn != i) {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}