#include<bits/stdc++.h>
using namespace std;
#define sixe(x) sizeof(x)/sizeof(x[0])
void CalculateIndegree(vector<int> a[],int v,int indegree[]){
    for(int i=0;i<v;i++){
        for(int u:a[i]){
            indegree[u] = indegree[u]+1;
        }
    }
}
void topologicalSort(vector<int> a[],int v){
    int indegree[v];
    for(int i=0;i<v;i++){
        indegree[i] = 0;
    }
    CalculateIndegree(a,v,indegree);
    queue<int> q;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    while (q.empty() == false)
    {
        /* code */
        int x = q.front();
        q.pop();
        cout<<x<<" ";
        for (int u : a[x])
        {
            if(--indegree[u]==0) q.push(u);
        }
        
    }  
    
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}

int main() 
{ 
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0, 2); 
    addEdge(adj,0, 3); 
    addEdge(adj,1, 3); 
    addEdge(adj,1, 4); 
    addEdge(adj,2, 3);  
  
    cout << "Following is a Topological Sort of\n"; 
    topologicalSort(adj,V);

	return 0; 
} 