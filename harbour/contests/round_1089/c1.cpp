#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

int lcm(int a, int b) {
    return (a / std::gcd(a, b)) * b;
}

void solve() {
    int n; cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        int ans = 0;

        for(int i = 0; i < n; i++) {
            if(i == 0) {
                int g = std::gcd(a[0], a[1]);
                if(g < a[0]) ans++;
            }
            else if(i == n - 1) {
                int g = std::gcd(a[n-2], a[n-1]);
                if(g < a[n-1]) ans++;
            }
            else {
                int gL = std::gcd(a[i-1], a[i]);
                int gR = std::gcd(a[i], a[i+1]);

                int L = lcm(gL, gR);

                if(L < a[i]) {
                    ans++;
                }
            }
        }
        cout << ans << endl;
}


int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}