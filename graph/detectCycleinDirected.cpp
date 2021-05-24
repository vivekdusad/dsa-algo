#include<bits/stdc++.h>
using namespace std;
#define sixe(x) sizeof(x)/sizeof(x[0])
bool DfsRec(vector<int> a[],int v,int s,bool visited[],bool onRec[]){
    visited[s] = true;
    onRec[s] = true;
    for(int u:a[s]){
        if(visited[u]==false&&DfsRec(a,v,u,visited,onRec)) return true;
        else if(onRec[u]==true) return true;
    }
    onRec[s] = false;
    return false;
}
bool dfs(vector<int> a[],int v){
    bool visited[v];
    bool onRec[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
        onRec[i] = false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            if(DfsRec(a,v,i,visited,onRec)==true) return true;            
        }
    }
    return false;
}
void CalculateIndegree(vector<int> a[],int v,int indegree[]){
    for(int i=0;i<v;i++){
        for(int u:a[i]){
            indegree[u] = indegree[u]+1;
        }
    }
}
//THIS METHOD IS USING KHAN'S ALGORITHM WHICH IS USED TO FIND TOPOLOGICAL SORT
bool detectCycleKahn(vector<int> a[],int v){
    
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
    int count =0;
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
        count++;
        
    }  
    return (count==v)?false:true;    
}


int main(){
    

}