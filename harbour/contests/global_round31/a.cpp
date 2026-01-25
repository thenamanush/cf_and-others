#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int l, a, b; cin >> l >> a >> b;

    set<int> ans;
    ans.insert(a);
    for(int i = 1; i <= 5000; ++i) {
        a = (a + b) % l;
        if(ans.find(a) == ans.end()) {
            ans.insert(a);
        }
        else break;
    }
    cout << *ans.rbegin() << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}