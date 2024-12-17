#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;

vector<int> adj_list[N];
int visited[N];
int cost[N];
int parent[N];

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
        int top = st.top();
        cout << top << " ";
        st.pop();

        for (int i = 0; i < adj_list[top].size(); i++)
        {
            int v = adj_list[top][i];

            if (visited[v] == 0)
            {
                visited[v] = 1;
                cost[v] = cost[top] + 1;
                parent[v] = top;
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

    for (int i = 1; i <= edges; i++)
    {
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int source, destination;
    cin >> source >> destination;

    DFS(source);

    // path printing

    vector<int> path;
    int now = destination;

    path.push_back(now);
    while (parent[now] != now)
    {
        now = parent[now];
        path.push_back(now);
    }

    reverse(path.begin(), path.end());

    cout << "Path is: ";
    for (int i = 0; i < path.size(); i++)
    {
        if(i == path.size() - 1)
        {
            cout << path[i];
            break;
        }
        cout << path[i] << "-->";
    }
    cout << endl;

    return 0;
}