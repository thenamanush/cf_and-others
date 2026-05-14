#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    string s, t; cin >> s >> t;

    map<char, int> mp, mps;
    for(char c : t) {
        mp[c]++;
    }
    for(char c : s) {
        mps[c]++;
    }
    for(auto &it : mps) {
        char c = it.first;
        int need = it.second;
        if(need > mp[c]) {
            cout << "Impossible" << endl;
            return;
        }
        else{
            mp[c] -= need;
        }
    }
    string r = "";
    for(auto &it : mp) {
        r += string(it.second, it.first);
    }
    // cout << r << endl;
    string ans = "";
    int i = 0, j = 0;
    while(i < s.size() && j < r. size()) {
        if(s[i] <= r[j]) {
            ans += s[i++];
        }
        else{
            ans += r[j++];
        }
    }
    while(i < s.size()) ans += s[i++];
    while(j < r.size()) ans += r[j++];
    cout << ans << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}