#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 30001;
int a[N];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t; while(t--) solve();
    int n; cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    int d; cin >> d;
    while(d--) {
        int l, r; cin >> l >> r;
        cout << r - l << endl;
    }
}