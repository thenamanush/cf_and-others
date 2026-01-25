#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int ocnt = 0;
    for (char c : s) {
        if (c == '1') ocnt++;
    }
    if(ocnt == 0) cout << "Bob" << endl;
    // observation mistake, klk solve korbo
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}