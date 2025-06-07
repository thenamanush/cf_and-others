#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<vector<long long>> v(n, vector<long long>(n));

    int left = 0, top = 0, right = n - 1, bottom = n - 1;
    int key = 0;

    while (top <= bottom && left <= right)
    {
        // left
        for (int i = left; i <= right; ++i)
        {
            v[top][i] = key;
            key++;
        }
        top++;

        // bottom
        for (int i = top; i <= bottom; ++i)
        {
            v[i][right] = key;
            key++;
        }
        right--;

        // right
        for (int i = right; i >= left; --i)
        {
            v[bottom][i] = key;
            key++;
        }
        bottom--;

        // top
        for (int i = bottom; i >= top; --i)
        {
            v[i][left] = key;
            key++;
        }
        left++;
    }

    for (auto& row : v) {
    for (auto val : row) {
        cout << val << " ";
    }
    cout << "\n";
}
}

/*left
    for(left-right){
    [top][i]
    top++
    }*/

/*bottom
for(top - bottom){
[i][right]
right--
}
*/

/*
right
for(right - left){
[bottom][i]
bottom--
}
*/

/*
 top
 for(bottom - top){
 [i][left]
 }*/