
/* how to understand it's a dp problem?
    - try all possible ways
    - find number of ways
    - find min/max of something
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int ans(int n, vector<int> &heights, vector<int> &dp)
    {
        if (n == 0)
            return 0;

        if (dp[n] != -1)
            return dp[n];

        int left = ans(n - 1, heights, dp) + abs(heights[n] - heights[n - 1]);
        int right = INT_MAX;
        if (n > 1)
            right = ans(n - 2, heights, dp) + abs(heights[n] - heights[n - 2]);

        return dp[n] = min(left, right);
    }

    int frogJump(vector<int> &heights)
    {
        int n = heights.size();
        vector<int> dp(n, -1);
        return ans(n - 1, heights, dp);

        // tabulation method
        dp[0] = 0;
        for (int i = 1; i < n; ++i)
        {
            int left = dp[i - 1] + abs(heights[i] - heights[i - 1]);
            int right = INT_MAX;
            if (i > 1)
            {
                right = dp[i - 2] + abs(heights[i] - heights[i - 2]);
            }
            dp[i] = min(left, right);
        }
        return dp[n - 1];
    }
};
