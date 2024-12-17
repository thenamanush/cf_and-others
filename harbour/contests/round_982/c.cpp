#include <iostream>
#include <vector>
using namespace std;

#define alliswell                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    long long max_length = n; // Start with the current length
    for (int i = 1; i < n; ++i) { // Starting from index 1 (second element)
        // Check the condition a[i] = n + 1 - (i + 1)
        if (a[i] == max_length + 1 - (i + 1)) {
            max_length += (i); // Append (i) zeros (i - 1 + 1)
        }
    }
    
    cout << max_length << "\n"; // Output the maximum length for the test case
}

int main() {
    alliswell
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        solve(); // Process each test case
    }
    return 0;
}
