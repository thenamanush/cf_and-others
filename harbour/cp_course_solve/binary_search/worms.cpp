#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n);

    int sum = 0;
    
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        sum += x;
        a[i] = sum;
    }
    
    int m; cin >> m;
    while(m--) {
        int key; cin >> key;
        int l = 0, r = n - 1;
        
        auto it = lower_bound(a.begin(), a.end(), key);
        cout << (it - a.begin()) + 1 << endl;
    }
}