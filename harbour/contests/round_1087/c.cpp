#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;

    for(int i = 2; 2 * i <= 2 * n; i++) {
        cout << "? " << 2 * i - 1 << " " << 2 * i << endl;
        cout.flush();

        int x; 
        cin >> x;

        if(x == 1) {
            cout << "! " << 2 * i - 1 << endl;
            cout.flush();
            return;
        }
    }

    cout << "? 1 3" << endl;
    cout.flush();

    int x; cin >> x;
    if(x == 1) {
        cout << "! 1" << endl;
        cout.flush();
        return;
    }
    cout << "? 1 4" << endl;
    cout.flush();
    cin >> x;
    if(x == 1) {
        cout << "! 1" << endl;
        cout.flush();
        return;
    }
    cout << "! 2" << endl;
    cout.flush();
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}