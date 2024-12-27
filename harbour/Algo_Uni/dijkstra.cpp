#include<bits/stdc++.h>
using namespace std;
#define pb push_back

const int N = 1e5+7;
vector<pair<int, int>> adj[N];

void dijkstra(int s, int n)
{
    vector<int> cost(N, INT_MAX);
    //vector<int> par(N, -1);
    set<pair<int, int>> st;
    
    cost[s] = 0;
    st.insert({0, s});  // Insert the source node with a cost of 0
    
    while(!st.empty())
    {
        int u = st.begin()->second;  // Get the node with the smallest cost
        int c = st.begin()->first;   // Get the cost of this node
        st.erase(st.begin());        // Remove it from the set
        
        // If the current cost is greater than the recorded cost, skip
        if(c > cost[u]) continue;
        
        // Traverse all neighbors of u
        for(int i = 0; i < adj[u].size(); ++i)
        {
            int v = adj[u][i].first;
            int w = adj[u][i].second;
            
            // If a shorter path to v is found
            if(cost[u] + w < cost[v])
            {
                // Remove the old (cost, node) pair for v from the set if it exists
                if(cost[v] != INT_MAX)
                {
                    st.erase(st.find({cost[v], v}));
                }
                
                // Update the cost and parent of v
                cost[v] = cost[u] + w;
                //par[v] = u;
                st.insert({cost[v], v});  // Insert the updated pair
            }
        }
    }
    
    // Print the costs of all nodes from the source node
    for(int i = 1; i <= n; ++i)
    {
        if(i == s) continue;  // Skip the source node
        if(cost[i] == INT_MAX) cout << -1 << " ";
        else cout << cost[i] << " ";
    }
    cout << endl;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    
    // Clear adjacency list for each test case
    for(int i = 0; i <= n; i++) {
        adj[i].clear();
    }
    
    int u, v, w; 
    for(int i = 0; i < m; ++i)
    {
        cin >> u >> v >> w;
        adj[u].pb({v, w});
        adj[v].pb({u, w});  // If the graph is undirected
    }
    
    int source;
    cin >> source;
    dijkstra(source, n);
}

int main()
{
    int t; 
    cin >> t;
    while(t--) solve();
    return 0;
}
