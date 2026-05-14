#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        // For each value v, collect elements that can produce v:
        // c_i == v, or c_i > 2*v
        // We binary search on answer k, checking if we can cover 0..k-1
        
        // Greedy check: for a given k, can we assign one element per value 0..k-1?
        // Process values from largest to smallest (hardest to cover first)
        // Use a multiset of available elements
        
        // Binary search on k
        int lo = 0, hi = n;
        
        auto check = [&](int k) -> bool {
            if (k == 0) return true;
            // For values v = k-1 down to 0, greedily pick smallest valid element
            // Valid for v: element e where e == v or e > 2*v
            // Sort array, use multiset
            multiset<int> ms(a.begin(), a.end());
            
            for (int v = k - 1; v >= 0; v--) {
                // Need e == v or e > 2*v
                // First try smallest e > 2*v
                auto it = ms.upper_bound(2 * v);
                if (it == ms.end()) {
                    // Try e == v
                    auto it2 = ms.find(v);
                    if (it2 == ms.end()) return false;
                    ms.erase(it2);
                } else {
                    // Pick smallest e > 2*v, but also check if e==v is better
                    // e==v uses exact match, save larger elements for harder values
                    auto it2 = ms.find(v);
                    if (it2 != ms.end() && *it2 <= *it) {
                        ms.erase(it2);
                    } else {
                        ms.erase(it);
                    }
                }
            }
            return true;
        };
        
        while (lo < hi) {
            int mid = (lo + hi + 1) / 2;
            if (check(mid)) lo = mid;
            else hi = mid - 1;
        }
        
        int mexwf = lo;
        cout << mexwf << "\n";
    }
    
    return 0;
}