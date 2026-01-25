#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    int cs = 0;
    while(t--) {
        int n, d; cin >> n >> d;
        int cur = 0, len = 1;
        for(len = 1; ; len++) {
            cur = (cur * 10 + d) % n;
            if(cur == 0) break;
        }
        cout << "Case " << ++cs << ": " << len << endl;
    }
}