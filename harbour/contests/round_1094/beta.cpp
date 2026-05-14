#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    string s; cin >> s;
    int n; cin >> n;

    vector<int> num;
    string tmp = "";
    
    for(char c : s) {
        if(isdigit(c)) {
            tmp += c;
        }
        else{
            if(!tmp.empty()) {
                int x = stoll(tmp);
                tmp = "";
                num.push_back(x);
            }
        }
    }
    int a = num[0], b = num[1];


    int d = b - a;

    int sum = n * (2 * a + (n - 1) * d) / 2;

    cout << sum << endl;
}

int32_t main() {
    alliswell
    solve();
}