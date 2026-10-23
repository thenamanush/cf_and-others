#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    string s; cin >> s;
    int ans = 1;
    bool f1 = false, f2 = false;
    for(int i = 0; i < s.size() - 2; i++) {
        if(s[i] == s[i + 1] && s[i] == s[i + 2]) f1 = true;
        if(s[i] != s[i + 1] && s[i] == s[i + 2]) f2 = true;
    }

    ans += f1;
    ans += f2;

    cout << ans << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}