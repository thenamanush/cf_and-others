#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
#define gcd std::gcd

void solve() {
    string s;
        cin >> s;

        int cnt = 0;
        for (int i = 0; i + 1 < (int)s.size(); i++) {
            if (s[i] == s[i + 1]) cnt++;
        }

        if (cnt <= 2) cout << "YES" << endl;
        else cout << "NO" << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}