#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);

    set<int> check, found;
    for(int i = 0; i < k; ++i) {
        check.insert(i);
    }
    int cnt = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] < k) found.insert(a[i]);
        if(a[i] == k) cnt++;
    }

    int mis = check.size() - found.size();
    cout << max(cnt, mis) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}