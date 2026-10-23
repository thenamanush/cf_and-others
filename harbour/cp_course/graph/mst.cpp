#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
const int N = 2e5 + 5;

struct dsu{
    vector<int> par, rank, size;
    int c;
    dsu(int n) : par(n + 1), rank(n + 1, 0), size(n + 1, 1), c(n) {
        iota(par.begin(), par.end(), 0);
    }
    int find(int x) {
        if(par[x] == x) return x;
        return par[x] = find(par[x]);
    }
    bool same(int x, int y) {
        return find(x) == find(y);
    }
    int get_size(int x) {
        return size[find(x)];
    }
    int count() {
        return c;
    }
    int merge(int x, int y) {
        x = find(x), y = find(y);
        if(x == y) return 0;
        c--;
        if(rank[x] < rank[y]) swap(x, y);
        par[y] = x;
        size[x] += size[y];
        if(rank[x] == rank[y]) rank[x]++;
        return 1;
    }
};

int32_t main() {
    alliswell

    int n; cin >> n;

    
    return 0;
}