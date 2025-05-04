#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int romanToInt(string s) {
            unordered_map<char, int> mp = {
                {'M', 1000}, {'D', 500},{'C',100},{'L',50}, {'X', 10},
                {'V', 5}, {'I', 1}
            };
            int ans = 0, n = s.size();
            for(int i = 0; i < n; ++i){
                int val = mp[s[i]];
                if(i + 1 < n && val < mp[s[i+1]]){
                    ans -= val;
                }
                else{
                    ans += val;
                }
            }
            return ans;
        }
    };
    