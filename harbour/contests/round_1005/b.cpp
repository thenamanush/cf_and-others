#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define nl '\n'
#define alliswell ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    int distinct = freq.size();  // Total distinct elements in the original array
    int best_score = n - distinct;
    pair<int, int> ans = {1, 1}; // Default answer (1-based indexing)

    int left = 0;
    unordered_map<int, int> window_freq;
    for (int right = 0; right < n; right++) {
        window_freq[a[right]]++;
        
        // Shrink the window while maintaining the count of distinct elements
        while (window_freq[a[left]] > 1) {
            window_freq[a[left]]--;
            left++;
        }

        int remaining_distinct = distinct - (right - left + 1); 
        int new_score = (n - (right - left + 1)) - remaining_distinct;

        if (new_score > best_score) {
            best_score = new_score;
            ans = {left + 1, right + 1}; // Convert 0-based index to 1-based
        } else if (new_score == best_score) {
            if ((right - left) < (ans.second - ans.first)) {
                ans = {left + 1, right + 1};
            }
        }
    }

    cout << ans.first << " " << ans.second << nl;
}

int main() {
    alliswell
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
