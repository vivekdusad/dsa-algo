#include<bits/stdc++.h>
using namespace std;
#define sixe(x) sizeof(x)/sizeof(x[0])
bool DFSRec(vector<int> a[],int v,int s,int parent,bool visited[]){
    visited[s] = true;
    for(int u:a[s]){
        if(visited[u] == false){
            if(DFSRec(a,v,u,s,visited)== true){
            return true;
        }
        }else if(u != parent) return true;

    }
    return false;
}
bool DFS(vector<int> a[],int v){
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i] = false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]== false){
            if(DFSRec(a,v,i,-1,visited)==true) return true;
        }

    }
    return false;
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() 
{ 
	int V=6;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,1,2); 
	addEdge(adj,2,4); 
	addEdge(adj,4,5); 
	addEdge(adj,1,3);
	addEdge(adj,2,3);

	if(DFS(adj,V))
	    cout<<"Cycle found";
	else
	    cout<<"No cycle found";

	return 0; 
} 
