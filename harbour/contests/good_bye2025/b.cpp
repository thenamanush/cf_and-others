#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    string s; cin >> s;
    int n = s.size();

    int ans = 0;
    bool flip = false;
    
    if(s[0] == 'u') ans++;
    if(s[n - 1] == 'u') ans++;
    for(int i = 1; i < n - 1; ++i) {
        if(s[i] == 'u') {
            if(flip) {
                ans++;
                flip = false;
            }
            else{
                flip = true;
            }
        }
        else {
            flip = false;
        }
    }
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}