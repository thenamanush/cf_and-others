//jump game

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
const int N = 1e5+7;

void jump(int n, vector<int> &a)
{
    bool f = 1;
    int max_length = 0;
    for(int i = 0; i < n-1; ++i)
    {
        if(i > max_length)
        {
            f = 0;
            break;
        }
        max_length = max(max_length, i + a[i]);
        if(max_length >= n-1)
        {
            f = 1;
            break;
        }
    }
    if(f) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    int n; cin >> n;
    vector<int> length(n);
    
    for(int i= 0; i < n; i++)
    {
        cin >> length[i];
    }

    jump(n, length);
}

/*
input:
8
1 2 4 1 1 0 2 5

output:
YES

input:
8
1 2 3 1 1 0 2 5

output:
NO
*/