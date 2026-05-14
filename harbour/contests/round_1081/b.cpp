#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int cnt1 = 0 , cnt0 = 0;
    for(char c : s) {
        if(c == '1') cnt1++;
        else cnt0++;
    }
    if(cnt1 == 0) {
        cout << 0 << endl;
    }
    else if(cnt0 & 1) {
        cout << cnt0 << endl;
        for(int i = 0; i < n; ++i) {
            if(s[i] == '0') cout << i + 1 << ' ';
        }
        cout << endl;
    }
    else if(cnt1 % 2 == 0) {
        cout << cnt1 << endl;
        for(int i = 0; i < n; ++i) {
            if(s[i] == '1') cout << i + 1 << ' ';
        }
        cout << endl;
    }
    else{
        cout << -1 << endl;
    }
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}