#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    
    int st = 0;
    if(n & 1) {
        if(s[0] == 'b') {
            no;
            return;
        }
        st = 1;
    }
    for(int i = st; i + 1 < n; i += 2) {
        if(s[i] != '?' && (s[i] == s[i + 1])) {
            no;
            return;
        }
    }
    yes;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}