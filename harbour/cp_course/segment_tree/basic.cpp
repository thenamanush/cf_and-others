#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
const int N = 1e5 + 7;
int a[N];
int t [4 * N];

void build(int node, int b, int e) {
    // leaf node
    if(b == e) {
        t[node] = a[b];
        return;
    }
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid + 1, e);
    
    t[node] = t[l] + t[r];
}

int query(int node, int b, int e, int i, int j) {
    if(b > j or e < i) return 0;
    if(b >= i and e <= j) {
        return t[node];
    }
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

void update(int node, int b, int e, int i, int x) {
    if(b > i or e < i) return;
    if(b == e and b == i) {
        t[node] = x;
        return;
    }
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    update(l, b, mid, i, x);
    update(r, mid + 1, e, i, x);
    t[node] = t[l] + t[r];
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];

    build(1, 1, n);
    cout << t[1] << endl;
    cout << query(1, 1, n, 2, 4) << endl;
    update(1, 1, n, 3, 10);
    cout << query(1, 1, n, 2, 4);
}