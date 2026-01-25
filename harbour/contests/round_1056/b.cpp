#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, k; cin >> n >> k;
    if((n * n) == k + 1) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            if(k > 0) {
                k--;
                cout << 'U';
            }
            else{
                if(i < n) {
                    cout << 'D';
                }
                else{
                    if(j < n) {
                        cout << 'R';
                    }
                    else{
                        cout << 'L';
                    }
                }
            }
        }
        cout << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}