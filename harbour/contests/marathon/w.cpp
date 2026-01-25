#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t; while(t--) solve();
    int n, x; cin >> n >> x;
    vector<int> a(n), b(n);
    
    for(auto & i : a) cin >> i;
    for(auto & i : b) cin >> i;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 0, i = 0, j = n - 1;
    while(i < n && j >= 0) {
        if(a[i] + b[j] >= x) {
            ans++;
            i++;
            j--;
        }
        else{
            i++;
        }
    }
    cout << 1 << ' ' << ans << endl;
}