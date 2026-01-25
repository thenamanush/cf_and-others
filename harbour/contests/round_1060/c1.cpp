#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

map<int, int> mp;

void primes(int x) {
    for(int i = 2; i * i <= x; ++i) {
        if(x % i == 0) {
            mp[i]++;
            while(x % i == 0) x /= i;
        }
    }
    if(x > 1) mp[x]++;
}

bool check(int x) {
    for(int i = 2; i * i <= x; ++i) {
        if(x % i == 0) {
            if(mp[i] > 0) return true;
            while(x % i == 0) x /= i;
        }
    }
    if(x > 1 && mp[x] > 0) return true;
    return false;
}


void solve() {
    mp.clear();
    int n; cin >> n;
    vector<int> a(n), b(n);
    
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> b[i];

    for(int i = 0; i < n; ++i) primes(a[i]);
    // ans is 0 or not
    bool f = false;
    for(auto [x, y] : mp) {
    if(y >= 2) {
        f = true;
        break;
    }
    }
    if(f) {
        cout << 0 << endl;
        return;
    }
    // ans is 1 or not
    for(int i = 0; i < n; ++i) {
        if(check(a[i] + 1)) {
            f = true;
            break;
        }
    }
    if(f) cout << 1 << endl;
    else cout << 2 << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}