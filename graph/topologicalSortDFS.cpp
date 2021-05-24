#include<bits/stdc++.h>
using namespace std;
#define sixe(x) sizeof(x)/sizeof(x[0])
void topologicalRec(vector<int>a[],int v,stack<int> st,bool visited[],int s){
    visited[s] = true;
    for (int u : a[s])
    {
        if(visited[u] == false){
            topologicalRec(a,v,st,visited,u);
        }
    }
    st.push(s);
    
}
void topologicalSort(vector<int> a[],int v){
    stack<int> st;
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i] = false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]== false){
            topologicalRec(a,v,st,visited,i);
        }
    }
    while (st.empty()== false)
    {
        int x = st.top();
        cout<<x<<" ";
    }
    

}

int main(){}
