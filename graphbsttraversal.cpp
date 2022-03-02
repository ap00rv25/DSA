#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
    adj[v].push_back(u);
    adj[u].push_back(v);
}
void BFS(vector<int> adj[], int V, int S) {
    bool visited[V];
    for(int i=0;i<V;i++) {
        visited[i]=false;    
    }
    queue<int> q;
    visited[S]=true;
    q.push(S);
    while(q.empty()==false) {
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(int V : adj[u]) {
            if(visited[V]==false) {
                visited[V]=true;
                q.push(V);
            }
        }
    }
}

int main() {
    int V=5;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,1,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3);
	addEdge(adj,3,4);
	addEdge(adj,2,4);

	cout << "Following is Breadth First Traversal: "<< endl; 
	BFS(adj,V,0); 
	return 0;
}
