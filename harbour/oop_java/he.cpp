#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size(), ans = 0;
        int l = 0, r = n - 1;
        while(l < r){
            int s = min(height[l], height[r]) * (r - l + 1);
            ans = max(ans, s);
            if(height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        cout << ans;
    }
};