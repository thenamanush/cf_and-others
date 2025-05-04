#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;

    // pre compute
    vector<int> hash(26, 0);
    for(int i = 0; i < s.size(); ++i){
        hash[s[i] - 'a']++;
    }

    int q; cin >> q;
    while(q--){
        char c; cin >> c;
        // fetch
        cout << hash[c-'a'] << endl;
    }
}

/* unordered_map is a smart solution
take less memory, can store beyond 10^7 */

/* for limited memory-
    modular arithmatic and linked list is effective */