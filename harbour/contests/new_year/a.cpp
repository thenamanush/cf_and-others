#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl

void solve() {
    int n; 
    cin >> n;
    string x, y;
    cin >> x >> y;

    if (n == 1) {
        (x == y ? yes : no);
        return;
    }

    for (int i = 0; i + 1 < n; ++i) {
        if(x[i] != y[i]) {
            if(i < n - 1) {
                x[i + 1] = x[i];
                x[i] = y[i];
            }
            else {
                no;
                return;
            }
        }
    }
    (x == y ? yes : no);
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
