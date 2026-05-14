#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
const int N = 1e9 + 7;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve() {
    int n; cin >> n;
    
    if(isPrime(n)) {
        cout << n << endl;
        return;
    }
    int ans = 1;
    for(int i = 2; i < 1e5; i++) {
        if(n % i == 0) {
            ans *= i;
            while(n % i == 0) n /= i;
        }
    }
    if(n > 1) ans *= n;
    cout << ans << endl;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}