
#include <bits/stdc++.h>
using namespace std;

void topologicalSort_khan_algorithm(vector<int> a[],int v){
    vector<int> in_degree(v,0);
    for(int i=0;i<v;i++){
        for(int v:a[i]){
            in_degree[v]++;
        }
    }
    queue<int> q;
    for(int i=0;i<v;i++){
        if(in_degree[i] == 0){
            q.push(i);
        }
    }
    while (!q.empty())
    {
        /* code */
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(int a:a[u]){
            if(--in_degree[a] == 0){
                q.push(a);
            }
        }
    }
    
}
void recs(vector<int> a[],int s,bool isVisited[],stack<int> stk){
    isVisited[s] = true;
    for(int u:a[s]){
        if(isVisited[u] == false){
            recs(a,u,isVisited,stk);
        }
    }
    stk.push(s);

}
void topological_sorting_dfs(vector<int> a[],int v){
    stack<int> s;
    bool isVisited[v] = {false};
    for(int i=0;i<v;i++){
        if(isVisited[i] == false){
            recs(a,i,isVisited,s);
        }
    }

    //At last printing stack
    while (!s.empty())
    {
        /* code */
        int top = s.top();
        s.pop();
        cout<<top<<" ";
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
    topologicalSort_khan_algorithm(adj,V);

	return 0; 
} 