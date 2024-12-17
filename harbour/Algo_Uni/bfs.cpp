#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> adj_list[N];
int visited[N];
int cost[N];
int parent[N];

void BFS(int s)
{
    visited[s] = 1;
    cost[s] = 0;
    parent[s] = s;

    queue<int> q;
    q.push(s);
    cout << "Traversal Order: ";
    while (!q.empty())
    {
        int top = q.front();
        cout << top << " ";
        q.pop();

        for (int i = 0; i < adj_list[top].size(); i++)
        {
            int v = adj_list[top][i];

            if (visited[v] == 0)
            {
                visited[v] = 1;
                cost[v] = cost[top] + 1;
                parent[v] = top;
                q.push(v);
            }
        }
    }
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

    BFS(source);

    cout << endl;
    cout << "Cost is: " << cost[destination] << endl;

    /**Path Printing**/
    vector<int> path; // Here, path is the name of the vector container

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
    // You can decorate path printing bit nicely than I did
    return 0;
}