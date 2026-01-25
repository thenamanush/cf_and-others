#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; ++i) cin >> a[i];
    if(n == 2) {
        if((a[0] == 0 or a[1] == 0) and (a[0] != a[1])) {
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
        return;
    }
    int cnt0 = 0;
    for(auto & it : a) {
        if(it == 0) cnt0++;
    }
    if(cnt0 == 0) {
        cout << "No" << endl;
        return;
    }
    else{
        if(cnt0 == 1) {
            cout << "Yes" << endl;
        }
        else{
            for(auto & it : a) {
                if(it == 1) {
                    cout << "Yes" << endl;
                    return;
                }
            }
            cout << "No" << endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}