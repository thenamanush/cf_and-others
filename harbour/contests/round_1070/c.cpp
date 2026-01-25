#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    vector<int> even, odd;
     
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] & 1) odd.push_back(a[i]);
        else even.push_back(a[i]);
    }
    sort(even.begin(), even.end(), greater<int>());
    sort(odd.begin(), odd.end(), greater<int>());


    for(int i = 0; i < even.size(); ++i) {
        if(i > 0) even[i] += even[i - 1];
    }
    for(int i = 0; i < odd.size(); ++i) {
        if(i > 0) odd[i] += odd[i - 1];
    }

    // for(auto & it : even) {
    //     cout << it << ' ';
    // }
    // cout << endl;
    // for(auto & it : odd) {
    //     cout << it << ' ';
    // }
    // cout << endl;

    if(odd.size() == 0) {
        for(int i = 0; i < n; ++i) {
            cout << 0 << ' ';
        }
        cout << endl;
        return;
    }
    int o = 0, e = 0;
    for(int i = 0; i < n; ++i) {
        if(i % 2 == 0) if(o + 1 < odd.size()) {
            // do it on your own way
            // believe in yourself
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}