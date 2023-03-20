#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> graph[100000 + 7];

void Prims_Algo(int vertices, int edges)
{
    multiset<pair<int, int>> pq; // define the priorty queue
    int source = 0;              // Take the Source node as zero. (We can take source node as any node)

    // par vector will contain the parent of the ith vertices
    // cost vector will contain the cost of the ith vertices
    // inMst vector will check wether the ith vertices exsist in Mst or not
    vector<int> par(vertices, -1), cost(vertices, 1e9), inMst(vertices);

    cost[source] = 0;                  // initial source cost will be zero
    pq.insert({cost[source], source}); // inserted the cost of source and source
    while (pq.size())                  // simple bfs
    {
        int node = (*pq.begin()).second;
        pq.erase(pq.begin());
        if (inMst[node])
            continue;
        inMst[node]++;
        for (auto i : graph[node])
        {
            int adj_node = i.first, weight = i.second;
            if (!inMst[adj_node] && cost[adj_node] > weight)
            {
                cost[adj_node] = weight;
                par[adj_node] = node;
                pq.insert({cost[adj_node], adj_node});
            }
        }
    }
    int MiniCost = 0;
    for (int i : cost)
        MiniCost += i;

    cout << "The Minimum Spanning Tree edges->\n\n";

    for (int i = 1; i < vertices; i++)
        cout << par[i] << "->" << i << " With cost " << cost[i] << "\n\n";

    cout << "The Minimum Cost of Tree will be " << MiniCost;
}

int main()
{
    int vertices, edges, source, min_weight = INT_MAX;
    cin >> vertices >> edges;
    while (edges--)
    {
        int v1, v2, w;
        cin >> v1 >> v2 >> w;
        graph[v1].push_back({v2, w});
    }
    Prims_Algo(vertices, edges);
    return 0;
}
