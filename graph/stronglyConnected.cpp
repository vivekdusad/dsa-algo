#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])

void stronglyConnected(vector<int> a[],int n,int visited[],int s){
    int temporaryVisited[n];
    for(int i=0;i<n;i++){
        temporaryVisited[i] = false;
    }
    visited[s] = true;
    
    
}
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}
int main(){}