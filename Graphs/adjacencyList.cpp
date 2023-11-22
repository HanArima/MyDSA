#include<iostream>
#include<unordered_map>
#include<list> 
using namespace std;

 class graph{
    public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool dir){
        //dir -> 0 = undirected graph
        //dir -> 1 = directed graph

        adj[u].push_back(v);

        if(dir == 0){
            adj[v].push_back(u);
        }
    }

    void printAdjList(){
        for (auto i:adj)
        {
            cout << i.first << "->";
            for (auto j:i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
        
    }
};

int main(){
    int n, m;
    cout << "Enter the number of Nodes: ";
    cin >> n;

    cout << "Enter the number of Edges: ";
    cin >> m;

    graph g;
    cout << "Enter the Edges: ";
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        g.addEdge(u,v,0);   //Undirected Graph
    }
    //Print
    g.printAdjList();

    return 0;
}