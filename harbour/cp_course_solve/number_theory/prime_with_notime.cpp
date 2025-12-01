#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, tc = 0; cin >> t;
    while(t--) {
        cout << "Case " << ++tc << ":\n";
        ll m, n; cin >> m >> n;
        if(m > n) cout << "Impossible to divide\n";
        else{
            int ans = 0;
            for(int i = m; i <= n; i += m){
                int x = i;
                while(x % m == 0){
                    ans++;
                    x /= m;
                }
            }
            cout << ans << '\n';
        }
    }
}