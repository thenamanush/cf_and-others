#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = (1 << 17) + 7;

#define endl '\n'
int a[N];
int t[4 * N];


int merge(int ans_l, int ans_r, int seg_l, int seg_r) {
    int seg_len = seg_r - seg_l + 1;
    int pw = 0;
    pw = log(seg_len) / log(2);

    if(pw & 1) return ans_l | ans_r;
    else return ans_l ^ ans_r;
}

void build(int n, int b, int e) {
    if(b == e) {
        t[n] = a[b];
        return;
    }
    int mid = (b + e) / 2;
    int l = 2 * n, r = 2 * n + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = merge(t[l], t[r], b, e);
}
void update(int n, int b, int e, int i, int v) {
    if(i < b or e < i) return;
    if(b == e) {
        t[n] = v;
        return;
    }
    int mid = (b + e) / 2;
    int l = 2 * n, r = 2 * n + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    t[n] = merge(t[l], t[r], b, e);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q; cin >> n >> q;
    n = 1 << n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    build(1, 1, n);
    while(q--) {
        int i, x;
        cin >> i >> x;
        update(1, 1, n, i, x);
        cout << t[1] << endl;
    }
}