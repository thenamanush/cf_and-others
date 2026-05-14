#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
#define gcd std::gcd

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);

    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < m; ++i) cin >> b[i];

    int no_of_pos = 0;
    for(int i = 0; i < n; ++i) {
        if(a[i] > 0) no_of_pos++;
    }

    int sum = accumulate(a.begin(), a.end(), 0ll);
    if(m <= no_of_pos) {
        sort(a.rbegin(), a.rend());
        for(int i = 0; i < m; ++i) {
            sum -= a[i];
        }
        cout << sum << endl;
        return;
    }
    bool e = 0, o = 0;
    for(int i = 0; i < m; ++i) {
        if(b[i] & 1) o = 1;
        else e = 1;
    }
    int e_mn = -1e9, o_mn = -1e9, e_sum = 0, o_sum = 0;
    for(int i = 0; i < n; ++i) {
        if(i & 1) {
            e_mn = max(e_mn, a[i]);
            if(a[i] > 0) e_sum += a[i];
        }
        else{
            o_mn = max(o_mn, a[i]);
            if(a[i] > 0) o_sum += a[i];
        }
    }
    if(e && o) {
        if(e_sum > 0) sum -= e_sum;
        else sum -= e_mn;
        if(o_sum > 0) sum -= o_sum;
        else sum -= o_mn;
        cout << sum << endl;
    }
    else if(e) {
        if(e_sum > 0) sum -= e_sum;
        else sum -= e_mn;
        cout << sum << endl;
    }
    else{
        if(o_sum > 0) sum -= o_sum;
        else sum -= o_mn;
        cout << sum << endl;
    }
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}