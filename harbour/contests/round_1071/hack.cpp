#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define endl '\n'
#define print(v) for(auto e:v) cout<<e<<" "; cout<<endl;
const int N = 2e5, mod = 1e9+7;

bool ok(ll mid , vector<int>& p,ll mn) {
    ll k = p.size();
    for(int i = 0; i < k; i++) {
        if(p[i] == mn) continue;
        ll j = p[i] - mn;
        if(j >= mid ){
            continue;
        }
        else {
            return false;
        }
    }
    return true;
}
void solve(int t) {
    int n; cin >> n;
    vector<int>p(n);
    int mn = 1e9;
    for(int i = 0; i < n; i++) {
        cin >> p[i];
        mn = min(p[i] , mn);
    }
    //cout << mn << endl;
    ll ans = mn;
    ll l = mn , h = 1e9;
    while (l <= h)
    {
        ll mid = (l + h) >> 1;
        if(ok(mid , p ,mn)) {
            ans = max(ans , mid);
            l = mid + 1;
        }
        else {
            h = mid - 1;
        }
    }
    cout << ans << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; cin >> t;
    for(int i = 0; i < t; i++) {
        solve(i+1);
    }
    return 0;
}