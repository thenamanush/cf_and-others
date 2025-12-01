#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    int rem = n - 3;
    int ans = max(0, rem);

    while(rem > 1) {
        ans += (rem - 2);
        rem -= 2;
    }
    cout << ans << endl;
}


int main() {
    int t; cin >> t;
    while(t--) solve();
}