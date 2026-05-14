#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n, x, y; cin >> n >> x >> y;
    vector<int> mid, lr;
    for(int i = 0; i < n; ++i) {
        int val; cin >> val;
        if(i < x || i >= y) lr.push_back(val);
        else mid.push_back(val);
    }

    int mn = LLONG_MAX;
    for(int i = 0; i < mid.size(); ++i) {
        mn = min(mn, mid[i]);
    }

    vector<int> ans;
    int ind = -1;
    bool f = true;
    for(int i = 0; i < lr.size(); ++i) {
        if(lr[i] < mn && f) {
            ans.push_back(lr[i]);
            ind = i;
        }
        else{
            f = false;
            break;
        }
    }

    rotate(mid.begin(), find(mid.begin(), mid.end(), mn), mid.end());

    // cout << mn << endl;
    for(auto & it : mid) {
        ans.push_back(it);
    }
    for(int i = ind + 1; i < lr.size(); ++i) {
        ans.push_back(lr[i]);
    }
    for(auto & it : ans) cout << it << ' ';
    cout << endl;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}