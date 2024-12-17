#include<bits/stdc++.h>
using namespace std;

#define pb push_back

set<int> st;
queue<int> q;
vector<int> adj_list[1000];
int indeg[1000];

 void top_sort()
{
    while(!q.empty())
    {
        int top = q.front();
        for(int i = 0; i < adj_list[top].size(); i++)
        {
            int v = adj_list[top][i];

            if(indeg[v] > 0)
            {
                indeg[v]--;
            }
            
            if(indeg[v] == 0)
            {
                q.push(v);
            }
        }
    }
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    char u, v;
    for(int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        int uu = (u - 'A') + 1;
        int vv = (v - 'A') + 1;
        adj_list[u].pb(v);

        indeg[vv]++;

        st.insert(uu);
        st.insert(vv);
    }

    for(auto &it : st)
    {
        if(indeg[it] == 0)
        {
            q.push(it);
        }
    }

    top_sort();
}