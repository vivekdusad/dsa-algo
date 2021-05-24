#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
stack<int>st;
void dfsRec(vector<int>a[],int n,int u,bool visited[]){
    visited[u] = true;
    for(int i:a[u]){
        if(visited[i] == false)
            dfsRec(a,n,i,visited);        
    }
    st.push(u);

}
void DFSUtil(int v, bool visited[],vector<int> adj[]) 
{ 
	visited[v] = true; 
	cout << v << " "; 

	
	for (int i :adj[v]) 
		if (!visited[i]) 
			DFSUtil(i, visited,adj); 
}
void finishTime(vector<int> a[],int n){
    
    bool visited[n];
    for(int i=0;i<n;i++){
        visited[i] = false;
    }
    for(int i=0;i<n;i++){
        if(visited[i]==false)
            dfsRec(a,n,i,visited);
    }

}
void kosaraju(vector<int> a[],int n){
    finishTime(a,n);
    
    bool visited[n];
    for(int i=0;i<n;i++){visited[i] = false;}
    while (st.empty()==false)
    {
        int x = st.top();
        st.pop();
        if(visited[x]==false)
            DFSUtil(x,visited,a);
        
    }
    
}
int main(){}