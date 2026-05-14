#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
#define gcd std::gcd

int ask(vector<int> &a) {
    cout << "? "<<  a.size() << ' ';
    for(auto &it : a) cout << it << ' ';
    cout << endl;
    cout << flush;
    
    int x; cin >> x;
    return x;
}

void solve() {
    int n; cin >> n;
    
    int last = -1;
    int lo = 3, hi = 2 * n + 1;
    while(lo <= hi) {
        int mid = (lo + hi) / 2;
        vector<int> v;
        for(int i = 1; i <= mid; ++i) v.push_back(i);
            int ans = ask(v);
            if((v.size() - ans) & 1) {
                last = mid;
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
    }
    int first = -1;
    lo = 1, hi = last - 2;
    while(lo <= hi) {
        int mid = (lo + hi) / 2;
        vector<int> v;
        for(int i = mid; i <= last; ++i) v.push_back(i);
        int ans = ask(v);
        if((v.size() - ans) & 1) {
            first = mid;
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
    lo = first + 1, hi = last - 1;
    int middle = -1;
    while(lo <= hi) {
        int mid = (lo + hi) / 2;
        vector<int> v;
        for(int i = first; i <= mid; ++i) v.push_back(i);
        v.push_back(last);
        int ans = ask(v);
        if((v.size() - ans) & 1) {
            middle = mid;
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }
    cout << "! " << first << ' ' << middle << ' ' << last << endl;
    cout << flush;
}
int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}