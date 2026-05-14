#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
#define gcd std::gcd

void solve() {
    int n; cin >> n;
    vector<int> a, b;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        if(x % 6) b.push_back(x);
        else a.push_back(x); 
    }
    if(a.size() > 2){
        for(auto &it : a) cout << it << ' ';
        for(auto &it : b) cout << it << ' '; cout << endl;
    }
    else{
        if(a.size() > 0) {
            cout << a[0] << ' ';
        }
         for(auto &it : b) cout << it << ' ';
         if(a.size() > 1) {
            cout << a[1] << endl;
         }
    }
}
int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}