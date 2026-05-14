#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    vector<int> a(7);
    vector<int> o;

    int sum = 0;
    for(int i = 0; i < 7; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < 6; ++i) {
        sum += -(a[i]);
    }
    sum += a[6];
    cout << sum << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}