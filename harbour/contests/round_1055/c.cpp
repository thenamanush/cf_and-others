#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
#define gcd std::gcd

void solve() {
    int n, q; cin >> n >> q;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; ++i) cin >> a[i];
    vector<int> prefix_zero(n + 1, 0), prefix_one(n + 1, 0);


    for(int i = 1; i <= n; ++i) {
    prefix_zero[i] = prefix_zero[i - 1];
    prefix_one[i] = prefix_one[i - 1];

    if(a[i] == 0) prefix_zero[i]++;
    else prefix_one[i]++;

    }
    while(q--) {
        int l, r; cin >> l >> r;
        int one_count = prefix_one[r] - prefix_one[l - 1];
        int zero_count = prefix_zero[r] - prefix_zero[l - 1];
        
        if(one_count % 3 != 0 || zero_count % 3 != 0) {
            return void(cout << -1 << endl); 
        }
        int mn = 1e9;
        unordered_map<int, int> last;
        for(int i = l; i <= r; ++i) {
            if(last.count(a[i])) {
                mn = min(mn, i - last[a[i]]);
            }
            last[a[i]] = i;
        }
        
        int t = (r - l + 1) / 3;
        cout << t + mn - 1 << endl;
    }
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}