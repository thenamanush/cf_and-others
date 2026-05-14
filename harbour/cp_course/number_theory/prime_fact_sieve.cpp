#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
#define gcd std::gcd

const int N = 1e6 + 9;
int spf[N];

int32_t main() {
    alliswell

    for(int i = 1; i < N; ++i) {
        spf[i] = i;
    }
    for(int i = 2; i < N; ++i) {
        for(int j = i; j < N; j += i) {
            spf[j] = min(spf[j], i);
        }
    }
    
    int q; cin >> q;
    while(q--) {
        int x; cin >> x;
        vector<int> pf;
        while(x > 1) {
            pf.push_back(spf[x]);
        x /= spf[x];
        }
        for(auto & it : pf) cout << it << ' '; cout << endl;

    }
}