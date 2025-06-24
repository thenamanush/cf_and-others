// printing all subsets

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>a{1,2,3};
    int n = a.size();

    int total = 1 << n;
    vector<vector<int>> subsets;

    for(int mask = 0; mask < total; ++mask){
        vector<int> list;
        for(int i = 0; i < n; ++i){
            if(mask & ( 1 << i)){
                list.push_back(a[i]);
            }
        }
        subsets.push_back(list);
    }

    for (auto & it : subsets) {
        cout << "{ ";
        for (int val : it) {
            cout << val << " ";
        }
        cout << "}" << endl;
    }
}