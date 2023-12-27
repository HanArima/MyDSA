/* You are given an undirected grapgh of M Nodes and N Edges. Your task is to create graph and print the adjacency list of the graph. It is guarenteed that all the edges are unique i.e., from Y to X, then there is no edge present from "Y" to "X" and vica versa, Also, there are no self-loops present in the graph.

Adjacency List is the set of the neighn=bours of the vertex in a graph.*/
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> printAdjList(int n, int m, vector<vector<int>>& edges){
    vector <int> neighbor[n];
    for(int i = 0 ; i<m; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        neighbor[u].push_back(v);
        neighbor[v].push_back(u);
    }

    // Resizing adj vector to match the number of vertices
    vector<vector<int>> adj(n);

    for(int i = 0; i < n; i++){
        adj[i].push_back(i);

        for (int j = 0; j < neighbor[i].size(); j++) {
            adj[i].push_back(neighbor[i][j]);
        }
    }
    return adj;
}

int main() {
    int n = 4; // Number of vertices
    int m = 3; // Number of edges
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 3}}; // Edges list

    vector<vector<int>> adjList = printAdjList(n, m, edges);

    // Displaying the adjacency list
    for (const auto& vertex : adjList) {
        for (int neighbor : vertex) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    return 0;
}


