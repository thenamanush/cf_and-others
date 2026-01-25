#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    string t = s + s;

    int ans = 0, cnt = 0;
    for(char c : t) {
        if(c == '0') cnt++;
        else cnt = 0;
        ans = max(ans, cnt);
    }
    
    cout << min(ans, n) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}