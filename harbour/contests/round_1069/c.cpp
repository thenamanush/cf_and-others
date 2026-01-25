#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    string x, y; cin >> x >> y;
    int a[26] = {0}, b[26] = {0};

    for(char c : x) {
        a[c - 'a']++;
    }
    for(char c : y) {
        b[c - 'a']++;
    }

    
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
    
}