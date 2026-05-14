#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

// void solve() {
//     int n; cin >> n;
//     vector<int> p(n), a(n);
    
//     for(int i = 0; i < n; ++i) cin >> p[i];
//     for(int i = 0; i < n; ++i) cin >> a[i];

//     int it = 0;
//     for(int i = 0; i < n; ++i) {
//         while(it < n and p[it] != a[i]) ++it;
//         if(it >= n) {
//             cout << "No" << endl;
//             return;
//         }
//     }
//     cout << "Yes" << endl;
// }

void solve() {
    int n; cin >> n;
    vector<int> pos(n + 1), a(n);

    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        pos[x] = i;
    }
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i + 1 < n; ++i) {
        if(pos[a[i]] > pos[a[i + 1]]) {
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