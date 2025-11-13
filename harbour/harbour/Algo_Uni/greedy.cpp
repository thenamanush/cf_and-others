#include <bits/stdc++.h>
using namespace std;

struct product
{
    int profit;
    int weight;
    double u_profit;
};

bool cmp(product a, product b)
{
    return a.u_profit > b.u_profit;
}

double fractional_knapsack(product prod[], int n, int w)
{
    sort(prod, prod + n, cmp);

    double profit = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (w >= prod[i].weight)
        {
            w -= prod[i].weight;
            profit += prod[i].profit;
        }
        else{
            profit += (double(w)/prod[i].weight)*prod[i].profit;
            break;
        }
    }
    return profit;
}

int main()
{
    int n = 7;
    int w = 15;

    struct product prod[n];

    int p[] = {7, 5, 15, 11, 6, 18, 3};
    int wt[] = {2, 4, 5, 7, 10, 8, 1};

    for (int i = 0; i < n; i++)
    {
        prod[i].profit = p[i];
        prod[i].weight = wt[i];
        prod[i].u_profit = double(prod[i].profit) / prod[i].weight;
    }

    double ans = fractional_knapsack(prod, n, w);
    cout << ans << endl;

    return 0;
}