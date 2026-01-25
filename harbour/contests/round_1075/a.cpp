#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, h, l;
    cin >> n >> h >> l;
    vector<int> a(n);

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int ans = 0;
    int lf = 0, rh = n - 1;
    while(lf < rh) {
        if((min(a[lf], a[rh]) <= min(l, h)) and (max(a[lf], a[rh]) <= max(l, h))) {
            ans++;
            lf++;
            rh--;
        }
        else{
            rh--;
        }
    }
    cout << min(n / 2, ans) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}