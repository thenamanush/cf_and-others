#include <bits/stdc++.h>
using namespace std;

double knapsack(int p[], int wt[], int w, int n)
{
    double mat[n + 1][w + 1];

    // Build the DP table
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
            {
                mat[i][j] = 0;
            }
            else if (wt[i - 1] > j)
            {
                mat[i][j] = mat[i - 1][j];
            }
            else
            {
                mat[i][j] = max(mat[i - 1][j], mat[i - 1][j - wt[i - 1]] + p[i - 1]);
            }
        }
    }

    // Trace the items selected
    int i = n, j = w;
    cout << "Selected items: \n";
    while (i > 0 && j > 0)
    {
        if (mat[i][j] != mat[i - 1][j])
        {
            cout << "Item: " << i << ", Weight: " << wt[i - 1] << ", Profit: " << p[i - 1] << endl;
            j -= wt[i - 1];
        }
        i--;
    }

    return mat[n][w];  // Return the maximum profit value
}

int main()
{
    int n;
    cin >> n;

    int p[n], wt[n];

    // Input profits and weights
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }

    int w;
    cin >> w;

    // Call the knapsack function and output the result
    double ans = knapsack(p, wt, w, n);
    cout << "Maximum profit: " << ans << endl;

    return 0;
}
