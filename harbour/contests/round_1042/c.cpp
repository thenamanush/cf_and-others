#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, k; cin >> n >> k;
    multiset<int> a, b;

    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        x %= k;
        a.insert(x);
    }
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        x %= k;
        b.insert(x);
    }

    for(auto & it : b) {
        auto pos = a.find(it);
        if(pos != a.end()) a.erase(pos);
        else {
            auto comp = a.find((k - it) % k);
            if(comp != a.end()) a.erase(comp);
            else {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}