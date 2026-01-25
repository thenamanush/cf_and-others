#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int cnta = 0, cntb = 0;
    for(char c : s) {
        if(c == 'a') ++cnta;
        else ++cntb;
    }
    int mid_a = cnta / 2 + 1, mid_b = cntb / 2 + 1;
    for(int i = 0; i < n; ++i) {
        if(s[i] == 'a') mid_a--;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}