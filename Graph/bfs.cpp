// problem print the connected commonents of the graph..
#include <bits/stdc++.h>
using namespace std;

void bfs(int node, vector<int> graph[], vector<bool>& vis)
{
    queue<int> q;
    q.push(node);
    while (q.size())
    {
        int curr_node = q.front();
        q.pop();
        if (vis[curr_node])
            continue;
        cout << curr_node << ' ';
        vis[curr_node] = 1;
        
        for (int adj : graph[curr_node])
            if (!vis[adj])
                q.push(adj);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> graph[n];
    vector<bool> vis(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            bfs(i, graph, vis);
            cout << '\n';
        }
    }
}