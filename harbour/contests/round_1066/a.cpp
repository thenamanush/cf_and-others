#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<ll> a(n);
    map<int, int> mp;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        mp[a[i]]++;
    }

    int ans = 0;
    for(auto & it : mp){
        if(it.second > it.first){
            ans += (it.second - it.first);
        }
        else if(it.second < it.first){
            ans += it.second;
        }
    }
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}