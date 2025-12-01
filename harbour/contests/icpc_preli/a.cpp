#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl cout << '\n'


void solve(){
    ll n, m;
    cin >> n >> m;
    
    set<ll> def;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        def.insert(x);
    }
    ll ans = m;
    
    for(int i = 0; i < m; ++i){
        ll x, y, z; 
        cin >> x >> y >> z;
        
        if((def.find(x)!= def.end()) && def.find(y) != def.end()){
            ans++;
            def.insert(z);
        }
    }
    cout << ans << '\n';

}
int main(){
    int t; cin >> t;
    while(t--) solve();
}