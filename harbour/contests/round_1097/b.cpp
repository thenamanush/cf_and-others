#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
#define gcd std::gcd

void solve() {
    int n; cin >> n; 
    vector<int> a(n);
    map<int, int> mp;

    int mx = -1;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        mp[a[i]]++;
        mx = max(mx, a[i]);
    }

    sort(a.begin(), a.end());
    int it = 0, sum = 0, s = 0;
    for(int i = 0; i < n; ++i) {
        if(mp[it]) {
            sum += mp[it] * (it * 2 + 1);
            s += mp[it];
            it++;
        }
        else break;
    }
    if(s * mx >= sum) {
        cout << mx * n << endl;
    }
    else{
        cout << sum + (n - s) * (mx + it) << endl;
        cout << sum << " " << mx << " " << s << endl;
    }
    for(auto &i : mp) {
        cout << i.first << ' ' << i.second << endl;
    }
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}