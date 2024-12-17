#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool ok(int n) {
    int k = static_cast<int>(sqrt(n));
    return k * k == n;
}

bool flag(const string& s, int k) {
    if (s.size() != k * k) return false;
    
    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < k; ++j) {
            if (i == 0 || i == k - 1 || j == 0 || j == k - 1) {
                if (s[i * k + j] != '1') return false;
            } else {
                if (s[i * k + j] != '0') return false;
            }
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    vector<string> results;
    results.reserve(t);
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        if (ok(n)) {
            int k = static_cast<int>(sqrt(n));
            if (flag(s, k)) {
                results.push_back("Yes");
            } else {
                results.push_back("No");
            }
        } else {
            results.push_back("No");
        }
    }
    
    for (const string& result : results) {
        cout << result << '\n';
    }
    
    return 0;
}
