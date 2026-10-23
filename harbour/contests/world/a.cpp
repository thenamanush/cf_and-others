#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int st = 0, en = 0;
    for(int i = 0; i < n; ++i) {
        if(s[i] == '1') {
            st = i;
            break;
        }
    }
    for(int i = n - 1; i >= 0; --i) {
        if(s[i] == '1') {
            en = i;
            break;
        }
    }
    int cnt = count(s.begin(), s.end(), '1');
    if(cnt == 2) cout << 1 << endl;
    else cout << en - st << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}