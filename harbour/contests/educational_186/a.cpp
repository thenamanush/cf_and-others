#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));

    int val = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            a[i][j] = val++;
        }
    }

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    ll ans = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {

            ll cur = a[i][j];

            for(int k = 0; k < 4; k++) {
                int x = i + dx[k];
                int y = j + dy[k];

                if(x >= 0 && x < n && y >= 0 && y < n)
                    cur += a[x][y];
            }
            ans = max(ans, cur);
        }
    }

    cout << ans << '\n';
}

int main() {
    int t; 
    cin >> t;
    while(t--) solve();
}
