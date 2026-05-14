#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
#define gcd std::gcd

void solve() {
    int n, m, a, b; cin >> n >> m >> a >> b;
    if(gcd(n, a) == 1 && gcd(m, b) == 1 && gcd(n, m) <= 2) {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}