#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> b[i];

    ll sum = 0;
    for(int i = 0; i < n - 1; ++i) {
        ll red = sum - a[i];
        ll blue = b[i] - sum;

        sum = max(red, blue);
    }
    cout << sum << endl;
    ll sum2 = 0;
    for(int i = 0; i < n - 1; ++i) {
        ll red = sum2 - a[i];
        ll blue = b[i] - sum2;

        sum2 = min(red, blue);
    }
    cout << sum2 << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}