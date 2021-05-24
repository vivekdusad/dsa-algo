#include<bits/stdc++.h>
using namespace std;
#define sixe(x) sizeof(x)/sizeof(x[0])
void DFS(vector<int> a[],int v,int s){
    bool isVisited[v];
    for(int i=0;i<v;i++) isVisited[i] = false;
    stack<int> st;
    st.push(s);
    while (st.empty() == false)
    {
        int x= st.top();
        cout<<x<<endl;
        st.pop();
        for(int v:a[x]){
            if(isVisited[v]==false) {
                isVisited[v] = true;
                st.push(v);
            }
        }
    }
    
}
int main(){}