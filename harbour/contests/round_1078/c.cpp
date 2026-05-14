#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n, k; cin >> n >> k;
    vector<vector<bool>> f(n, vector<bool> (26, false));

    for(int i = 0; i < k; ++i) {
        string s; cin >> s;
        for(int j = 0; j < n; ++j) {
            f[j][s[j] - 'a'] = true;
        }
    }

    vector<int> div;
    for(int i = 1; i * i <= n; ++i) {
        if(n % i == 0) {
            div.push_back(i);
            if(i != (n / i)) div.push_back(n / i);
        }
    }

    sort(div.begin(), div.end());

    for(auto d : div) {
        vector<char> ans(d);
        bool ok = true;

        for(int i = 0; i < d; ++i) {
            vector<bool> common(26, true);
            for(int j = i; j < n; j += d) {
                for(int c = 0; c < 26; ++c) {
                    common[c] = common[c] & f[j][c];
                }
            }

            bool found = false;
            for(int c = 0; c < 26; ++c) {
                if(common[c]) {
                    ans[i] = char('a' + c);
                    found = true;
                    break;
                }
            }

            if(!found) {
                ok = false;
                break;
            }
        }

        if(ok) {
            string s = "";
            for(int i = 0; i < n; ++i) {
                s += ans[i % d];
            }

            cout << s << endl;
            return;
        }
    }
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}