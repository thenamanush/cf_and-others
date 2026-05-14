#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    string a, b; cin >> a >> b;

    int cnt = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] == b[i]) continue;

        if(i + 1 < n && a[i] == a[i + 1] && b[i] == b[i + 1]) {
            i++;
        } else {
            cnt++;
        }
    }

    cout << cnt << endl;
}

int32_t main() {
    alliswell

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}