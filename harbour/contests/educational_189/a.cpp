#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
#define gcd std::gcd

void solve() {
    int x, y; cin >> x >> y;
    if(y <= 2 * x) {
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}