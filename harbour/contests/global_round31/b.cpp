#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;

    string ans;
    cin >> ans;
    for(int i = 1; i < n; ++i) {
        string s; cin >> s;
        string t1 = s + ans;
        string t2 = ans + s;

        if(t1 < t2) ans = t1;
        else ans = t2;
    }
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}