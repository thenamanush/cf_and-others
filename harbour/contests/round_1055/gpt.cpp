// let's check the power of gpt, men i still donno segment tree

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int INF = 1e18;

// Segment Tree for range minimum
struct SegTree {
    int n;
    vector<int> tree;

    SegTree(vector<int> &a) {
        n = a.size() - 1; // 1-based
        tree.resize(4 * n);
        build(1, 1, n, a);
    }

    void build(int node, int l, int r, vector<int> &a) {
        if(l == r) {
            tree[node] = a[l];
            return;
        }
        int mid = (l + r) / 2;
        build(2 * node, l, mid, a);
        build(2 * node + 1, mid + 1, r, a);
        tree[node] = min(tree[2 * node], tree[2 * node + 1]);
    }

    int query(int node, int l, int r, int ql, int qr) {
        if(qr < l || r < ql) return INF;
        if(ql <= l && r <= qr) return tree[node];
        int mid = (l + r) / 2;
        return min(
            query(2 * node, l, mid, ql, qr),
            query(2 * node + 1, mid + 1, r, ql, qr)
        );
    }
};

void solve() {
    int n, q; cin >> n >> q;

    vector<int> a(n + 1);
    for(int i = 1; i <= n; ++i) cin >> a[i];

    // prefix count
    vector<int> prefix_zero(n + 1, 0), prefix_one(n + 1, 0);
    for(int i = 1; i <= n; ++i) {
        prefix_zero[i] = prefix_zero[i - 1];
        prefix_one[i] = prefix_one[i - 1];

        if(a[i] == 0) prefix_zero[i]++;
        else if(a[i] == 1) prefix_one[i]++;
    }

    // next occurrence
    vector<int> next_pos(n + 1, INF);
    unordered_map<int,int> last;

    for(int i = n; i >= 1; --i) {
        if(last.count(a[i])) {
            next_pos[i] = last[a[i]];
        }
        last[a[i]] = i;
    }

    // dist array
    vector<int> dist(n + 1, INF);
    for(int i = 1; i <= n; ++i) {
        if(next_pos[i] != INF) {
            dist[i] = next_pos[i] - i;
        }
    }

    // build segment tree
    SegTree seg(dist);

    while(q--) {
        int l, r; cin >> l >> r;

        int one_count = prefix_one[r] - prefix_one[l - 1];
        int zero_count = prefix_zero[r] - prefix_zero[l - 1];

        if(one_count % 3 != 0 || zero_count % 3 != 0) {
            cout << -1 << endl;
            continue;
        }

        int mn = seg.query(1, 1, n, l, r);

        // invalid if next occurrence goes outside r
        // (filter manually)
        int valid_mn = INF;
        for(int i = l; i <= r; ++i) {
            if(next_pos[i] <= r) {
                valid_mn = min(valid_mn, dist[i]);
            }
        }

        if(valid_mn == INF) {
            cout << -1 << endl;
            continue;
        }

        int t = (r - l + 1) / 3;
        cout << t + valid_mn - 1 << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();
}