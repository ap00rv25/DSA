#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
    adj[v].push_back(u);
    adj[u].push_back(v);
}

void printGraph(vector<int> adj[], int v) {
    for(int i=0;i<v;i++) {
        for(auto x : adj[i]){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}

int main() {
    int V = 4; 
    vector<int> adj[V]; 
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 2); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    
    printGraph(adj, V); 
    return 0;
	// your code goes here
	return 0;
}
