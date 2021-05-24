#include<bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)/sizeof(x[0])
#define inf 100000000
int v =5;
int weight[5][5] = {{1,2,3},{2,4,5,},{2,4,5,},{2,4,5,},{2,4,5,}};
vector<int> topologicalSort(vector<int> a[]){
    int indegree[v];
    vector<int> answer;
    for(int i=0;i<v;i++){
        indegree[i]=0;
    }
    for(int i=0;i<v;i++){
        for(int u:a[i]){
            indegree[u]++;
        }
    }
    stack<int> st;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            st.push(i);
        }
    }
   
    while (st.empty() == false)
    {
        int x = st.top();
        answer.push_back(x);
        st.pop();
        for(int u:a[x]){
            if(--indegree[u]==0){
                st.push(u);
            }
        }
    }
    return answer;
    

}

void shortestPath(vector<int> a[],int v,int s){
    int distance[v];
    distance[0] = 0;
    for(int i=1;i<v;i++){
        distance[i] = inf;
    }    
    vector<int> topologicalOrder = topologicalSort(a);
    for(int i=0;i<v;i++){
        for(int u:a[i]){
            if(distance[u]>distance[i]+weight[i][u]){
                distance[u] = distance[i]+weight[i][u];
            }
        }
    }
    for(int i=0;i<v;i++){
        cout<<distance[i]<<" ";
    }

}
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}
int main(){
    
    vector<int> a[v];
    addEdge(a,0,1);
    addEdge(a,0,4);
    addEdge(a,1,2);
    addEdge(a,2,3);
    addEdge(a,4,2);
    addEdge(a,4,5);
    addEdge(a,5,3);
    

}