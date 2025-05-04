
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ar(n + 1, vector<int>(m + 1));
    vector<vector<int>> pfs(n+1, vector<int>(m+1, 0));

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> ar[i][j];
            pfs[i][j] = ar[i][j] + pfs[i-1][j] + pfs[i][j-1] - pfs[i-1][j-1];
        }
    }
    int q; cin >> q;
    while(q--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << pfs[c][d] - pfs[a-1][d] - pfs[c][b-1] + pfs[a-1][b-1] << endl;
    }
}