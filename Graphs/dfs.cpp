#include<bits/stdc++.h>
using namespace std;

bool visited[1000]={false};
void dfs(int v,vector<vector<int>> &adj)
{
    visited[v]=true;
    cout<<v<<endl;
    for (size_t i = 0; i < (int) adj[v].size(); ++i)
        if(!visited[adj[v][i]])
            dfs(adj[v][i],adj);
}

void addEdge(int v, int w,vector<vector<int>> &adj)
{ 
    adj[v].push_back(w); 
    adj[w].push_back(v); 
} 

int main()
{
    int n = 5;
    vector<vector<int>> adj(n);
    addEdge(0, 1,adj); 
    addEdge(0, 2,adj); 
    addEdge(1, 2,adj); 
    addEdge(2, 0,adj); 
    addEdge(2, 3,adj); 
    addEdge(3, 3,adj);
    dfs(2,adj);
}