#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        l--; r--;  // Convert to 0-indexed

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Collect elements outside the range [l, r]
        vector<int> remaining;
        for (int i = 0; i < l; i++) {
            remaining.push_back(a[i]);
        }
        for (int i = r + 1; i < n; i++) {
            remaining.push_back(a[i]);
        }

        // Sort the remaining elements in ascending order
        sort(remaining.begin(), remaining.end());

        // Create the subarray [a[l], a[l+1], ..., a[r]]
        vector<int> segment;
        for (int i = l; i <= r; i++) {
            segment.push_back(a[i]);
        }

        // Replace the largest values in the segment with the smallest values from remaining
        // We do this by sorting the segment in descending order
        sort(segment.begin(), segment.end(), greater<int>());

        int idx = 0;
        for (int i = 0; i < segment.size(); i++) {
            // Replace the largest values in the segment with the smallest remaining values
            if (idx < remaining.size() && remaining[idx] < segment[i]) {
                segment[i] = remaining[idx++];
            }
        }

        // Calculate the sum of the modified segment
        int segment_sum = 0;
        for (int i = 0; i < segment.size(); i++) {
            segment_sum += segment[i];
        }

        // Output the minimum sum
        cout << segment_sum << "\n";
    }

    return 0;
}
