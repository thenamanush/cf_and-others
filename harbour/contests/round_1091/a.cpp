#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
#define gcd std::gcd


void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n), b(k);

    for(int i = 0; i < k; ++i) cin >> b[i];
    for(int i = 0; i < n; ++i) cin >> a[i];

    for(int i = k; i >= 0; --i) {
        for(int j = 0; j < n; ++j) {
            if(a[j] >= k) {
                int rem = k - a[j] + 1;
                for(int x = 0; x < rem; ++x) {
                    cout << j + 1 << endl;
                }
            }
        }
    }
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}