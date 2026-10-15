#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
const int N = 2e5 + 5;
int n, k;
vector<int> a(N), b(N), c(N);


bool ok(int i) {
    return(a[i] - b[i] > 0 || a[i] - c[i] > 0 || b[i] - c[i] > 0);
}

void solve() {
    cin >> n >> k;

    vector<int> s(n), d(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];
        s[i] = a[i] + b[i] + c[i];
        if(ok(i)) d[i] = 0;
        else if(a[i] == c[i]) d[i] = -1;                        
        else {
            d[i] = b[i] - a[i] + 1;                           
            if(a[i] < b[i]) d[i] = min(d[i], c[i] - b[i] + 1);  
        }
    }

    auto can = [&](int T) {
        int tot = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] >= T) continue;
            if(d[i] < 0) return false;
            tot += T - s[i] + 2 * d[i];
            if(tot > k) return false;
        }
        return true;
    };

    int lo = *min_element(s.begin(), s.begin() + n), hi = lo + k;
    while(lo < hi) {
        int mid = lo + (hi - lo + 1) / 2;
        if(can(mid)) lo = mid;
        else hi = mid - 1;
    }

    cout << lo << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}