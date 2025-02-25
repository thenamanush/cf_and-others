/* in each query, you have to print the sum of range l and r */

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> pfs(N+1);

int main(){
    int n; cin >> n;
    vector<int> a(n+1);
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pfs[i] = pfs[i-1] + a[i];
    }
    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        cout << pfs[r] - pfs[l-1] << endl;
    }
}

/* input:
6
3 6 2 8 9 2
4
2 3
4 6
1 5
3 6
*/