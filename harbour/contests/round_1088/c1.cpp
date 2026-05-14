#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n), b(n);
    set<int> st;

    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) {
        cin >> b[i];
        if(b[i] > 0) st.insert(b[i]);
    }

    queue<int> q;
    for(int i = 0; i < n; ++i) {
        if(!st.count(a[i])) {
            q.push(a[i]);
        }
    }

    for(int i = 0; i < n; ++i) {
        if(b[i] < 0) {
            b[i] = q.front();
            q.pop();
        }
    }

    vector<int> cnt(n+1, 0);
    int bad = 0;

    for(int i = 0; i < k; i++) {
        cnt[a[i]]++;
        cnt[b[i]]--;
    }

    for(int i = 1; i <= n; i++) {
        if(cnt[i] != 0) bad++;
    }

    if(bad != 0) {
        no;
        return;
    }

    for(int i = k; i < n; i++) {
        int x1 = a[i-k], x2 = b[i-k];
        int x3 = a[i], x4 = b[i];

        if(cnt[x1] == 0) bad++;
        cnt[x1]--;
        if(cnt[x1] == 0) bad--;

        if(cnt[x2] == 0) bad++;
        cnt[x2]++;
        if(cnt[x2] == 0) bad--;

        if(cnt[x3] == 0) bad++;
        cnt[x3]++;
        if(cnt[x3] == 0) bad--;

        if(cnt[x4] == 0) bad++;
        cnt[x4]--;
        if(cnt[x4] == 0) bad--;

        if(bad != 0) {
            no;
            return;
        }
    }
    yes;
}

int32_t main() {
    alliswell

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}