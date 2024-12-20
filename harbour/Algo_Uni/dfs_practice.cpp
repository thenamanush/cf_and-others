#include <bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int> adj[1000];
vector<int> visited(1000, 0);
vector<int> cost(1000, 0);
vector<int> parent(1000);

void DFS(int s)
{
    visited[s] = 1;
    cost[s] = 0;
    parent[s] = s;

    stack<int> st;
    st.push(s);

    cout << "traversal order : ";
    while (!st.empty())
    {
        int u = st.top();
        cout << u << " ";
        st.pop();

        for (int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];
            if (visited[v] == 0)
            {
                visited[v] = 1;
                cost[v] = cost[u] + 1;
                parent[v] = u;
                st.push(v);
            }
        }
    }
    cout << endl;
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    int u, v;

    for (int i = 0; i < edges; i++) // path as input
    {
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    int start, destination;
    cin >> start >> destination;

    DFS(start);
    cout << "cost is : " << cost[destination] << endl;
}