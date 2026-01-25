#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    string s; cin >> s;
    int cnt = 0;
    
    for(char c : s) if(c == 'Y') cnt++;
    if(cnt <= 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();

    return 0;
}