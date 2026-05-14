#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
#define gcd std::gcd

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> last(n), jump(n);
    for(int i = n - 1; i >= 0; --i) {
        int nxt = i + a[i];
        if(nxt >= n) {
            jump[i] = 1;
            last[i] = i + 1;
        }
        else{
            jump[i] = jump[nxt] + 1;
            last[i] = last[nxt];
        }
    }
    for(int i = 0; i < n; ++i) {
        cout << last[i] << ' ' << jump[i] << endl;
    }
}

int32_t main() {
    alliswell

    int t = 1;
    while(t--) solve();
    
}