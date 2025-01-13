#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximizeScore(int n, const vector<int>& arr) {
    int count_1 = 0, count_minus1 = 0, count_0 = 0;

    // Count occurrences of 1, -1, and 0
    for (int num : arr) {
        if (num == 1) count_1++;
        else if (num == -1) count_minus1++;
        else count_0++;
    }

    // Maximize the score
    int score = 0;

    // Use two -1's and one 1 to gain 1 score if beneficial
    int pairs_of_minus1 = count_minus1 / 2;
    int usable_1s = min(pairs_of_minus1, count_1);
    score += usable_1s;
    count_minus1 -= 2 * usable_1s;
    count_1 -= usable_1s;

    // Use three 1's to gain 1 score each
    score += count_1 / 3;
    count_1 %= 3; // Remaining 1's

    // Neutralize remaining -1's with 0's if possible
    if (count_minus1 > 0) {
        int neutralized = min(count_minus1, count_0);
        count_minus1 -= neutralized;
        count_0 -= neutralized;
    }

    // If any -1's remain unneutralized, they reduce the score
    if (count_minus1 > 0 && count_1 > 0) {
        // Remaining 1's and -1's can combine negatively
        int pairs_to_reduce = min(count_minus1, count_1);
        count_minus1 -= pairs_to_reduce;
        count_1 -= pairs_to_reduce;
        score -= pairs_to_reduce;
    }

    return score;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        cout << maximizeScore(n, arr) << endl;
    }

    return 0;
}
