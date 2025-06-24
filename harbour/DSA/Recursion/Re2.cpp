#include <bits/stdc++.h>
using namespace std;

void PrintSub(int ind, vector<int> &v, int arr[], int n)
{
    if (ind == n)
    {
        for (auto &it : v)
        {
            cout << it << " ";
        }
        if (v.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;

        return;
    }

    // take the index
    v.push_back(arr[ind]);
    PrintSub(ind + 1, v, arr, n);
    v.pop_back();

    // not take
    PrintSub(ind + 1, v, arr, n);
}

int main()
{
    int arr[] = {3, 2, 1};
    int n = 3;
    vector<int> container;

    PrintSub(0, container, arr, n);
}