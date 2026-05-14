#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n, s, x;
    cin >> n >> s >> x;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    int sum = accumulate(a.begin(), a.end(), 0);

    int rem = s - sum;
    if(rem >= 0 and rem % x == 0) {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}