#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    ll x, y, z; cin >> x >> y >> z;

    cout << min((2 * y), (2 * z)) << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}