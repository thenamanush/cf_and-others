#include<bits/stdc++.h>
using namespace std;

#define ll long long

struct Triplet {
    ll x, y, z;
};

// comparator: we want max heap by z
struct cmp {
    bool operator()(const Triplet &A, const Triplet &B) const {
        return A.z < B.z;   // max-heap by z
    }
};

void solve() {
    ll n, k, x;
    cin >> n >> k >> x;

    vector<ll> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];

    sort(a.begin(), a.end());

    priority_queue<Triplet, vector<Triplet>, cmp> pq;

    // gap before first
    if(a[0] != 0)
        pq.push({0, a[0], a[0]});

    // internal gaps
    for(int i = 1; i < n; ++i)
        pq.push({a[i-1], a[i], a[i] - a[i-1]});

    // gap after last
    if(a[n-1] != x)
        pq.push({a[n-1], x, x - a[n-1]});

    vector<ll> ans;

    while (k--) {
        Triplet t = pq.top();
        pq.pop();

        ll key = t.y - t.x;
        ll mid = key / 2;

        ans.push_back(mid);

        // update the interval: new interval is [mid, y]
        Triplet newT = {mid, t.y, t.y - mid};
        pq.push(newT);
    }

    for (auto &v : ans) cout << v << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
}
