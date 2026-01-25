#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    set<int> check;
    vector<int> ans;
    
    for(int i = n; i > 0; --i) {
        check.insert((1 << i) - 1);
        ans.push_back((1 << i) - 1);
    }
    if(n > 2) {
        ans.push_back(5);
        check.insert(5);
    }
    check.insert(0);
    ans.push_back(0);
    int mx = (1 << n);
    for(int i = 2; i < mx; ++i) {
        if(check.find(i) == check.end()) {
            ans.push_back(i);
        }
    }
    for(auto & it : ans) cout << it << ' ';
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}