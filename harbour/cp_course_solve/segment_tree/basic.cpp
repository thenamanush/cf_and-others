#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 9;

int a[N];
int t[N * 4];

void build(int node, int b, int e) {
    if(b == e) {
        t[node] = a[b];
        return;
    }

    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;

    build(l, b, mid);// left part
    build(r, mid + 1, e); // right part
    t[node] = t[l] + t[r];
}

int query(int node, int b, int e, int i, int j) {
    if(b > j or e < i) return 0; // not in range
    if(b >= i and e <= j) { // totally in range
        return t[node];
    }
    // intersect
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    return query(l, b, mid, i, j) + query(r, mid + 1, r, i, j);
}

void update(int node, int b, int e, int i, int x) {
    if(b > i or e < i) return; // out of range
    if(b == i and e == i){
        t[node] = x;
        return;
    }
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;

    update(l, b, mid, i, x);
    update(r, mid + 1, e, i, x);
    t[node] = t[l] + t[r];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    build(1, 1, n);
    cout << t[1] << '\n';
    cout << query(1, 1, n, 2, 5);
}