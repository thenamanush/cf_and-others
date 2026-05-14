#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i <= n; ++i) {
        bool f = false;
        for(int j = i; j <= n; j *= 2) {
            if(a[j] == i) {
                f = true;
                swap(a[j], a[i]);
                break;
            }
        }
        if(!f) {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}
int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();

    return 0;
}