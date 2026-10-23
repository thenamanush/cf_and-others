#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    int cnt = 0;
    for(auto &x : a) {
        cin >> x;
        if(x & 1) cnt++;
    }

    if(n == 1 || cnt % 2 == 0) return void(cout << "Moggity" << endl);

    if(n == 2 || (n == 3 && cnt == 3)) return void(cout << "Larpity" << endl);
    cout << "Moggity" << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();

    return 0;
}
