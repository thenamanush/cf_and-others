#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n; 
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; ++i)
        cin >> a[i];

    for(int i = 0; i < n; ++i) {
        if(a[i] != (n - i)) {
            int ind = -1;
            for(int j = i + 1; j < n; ++j) {
                if(a[j] == (n - i)) {
                    ind = j;
                    break;
                }
            }

            for(int j = ind; j >= i; --j)
                cout << a[j] << ' ';

            for(int j = ind + 1; j < n; ++j)
                cout << a[j] << ' ';

            cout << endl;
            return;
        }
        cout << a[i] << ' ';
    }
    cout << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}