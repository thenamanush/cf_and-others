#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, k, q; cin >> n >> k >> q;
    vector<int> track(n + 1, 0);

    while(q--) {
        int c, l, r;
        cin >> c >> l >> r;
        if(c == 1) {
        for(int i = l; i <= r; ++i) {
            if(track[i] <= 1) { // min only or min and min
                track[i] = 1;
            }
            else { // min and mex overlap
                track[i] = 3;
            }
        }
        }
        else {
            for(int i = l; i <= r; ++i) { 
                if(track[i] == 0 || track[i] == 2) { // mex and min overlap
                    track[i] = 2;
                }
                else {
                    track[i] = 3; // mex only
                }
            }
        }
    }
    // for(int i = 1; i <= n; ++i) cout << track[i] << ' ';
    for(int i = 1; i <= n; ++i) {
        //cout << track[i] << "->";
        if(track[i] <= 1) cout << k << ' ';
        else if(track[i] == 2) cout << i % k << ' ';
        else cout << k + 1 << ' ';
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();
}