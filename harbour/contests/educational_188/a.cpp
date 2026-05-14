#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    
    for(int i = 0; i < n - 1; ++i) {
        if(s[i] == 'R' and s[i + 1] == 'L') {
            cout << i + 2 << endl;
            return;
        }
    }
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();

    return 0;
}