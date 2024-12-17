//min jump to reach the end where reaching is guaranteed

#include<bits/stdc++.h>
using namespace std;

int max_jump(vector<int> & a)
{
    int n = a.size();
    int jumps = 0, l = 0, r = 0;
    while(r < n-1)
    {
        int farthest = 0;
        for(int i = l; i <= r; ++i)
        {
            farthest = max(farthest, i + a[i]);
        }
        l = r + 1;
        jumps++;
        r = farthest;
    }
    return jumps;
}

int main()
{
    int n; cin >> n;
    vector<int> length(n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> length[i];
    }

    cout << max_jump(length) << endl;
}

/*
input:
8
1 2 4 1 1 0 2 5

output:
4


input:
8
2 3 1 4 1 1 1 2

output:
3
*/