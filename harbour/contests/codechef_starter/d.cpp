#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;

    vector<int> a(n), b(n);

    for(int i = 0; i < n; ++i) 
    cin >> a[i];

    for(int i = 0; i < n; ++i) 
    cin >> b[i];

    if(a == b) {
        cout << "Yes" << endl;
        return;
    }

    for(int i = 0; i < n - 1; ++i) {
        if((a[i + 1] <= max(a[i], b[i])) && (a[i+1] >= min(a[i], b[i]))) {
            cout << "No" << endl;
            return;
        }
    }

    if(n > 1) {
        if((a[n - 2] <= max(a[n - 1], b[n - 1])) && (a[n - 2] >= min(a[n - 1], b[n - 1]))) {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();
}